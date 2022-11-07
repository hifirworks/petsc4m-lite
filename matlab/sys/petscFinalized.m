function [finalized, errCode, toplevel] = petscFinalized
%Determine whether PetscFinalize() has been called yet.
%   [finalized, errCode] = petscFinalized
%
%   finalized(int)
%   errCode(int) return code (0 indicates OK)
%
% SEE ALSO: petscInitialize, petscFinalize, petscInitialized
%
% PETSc C interface:
%   PetscErrorCode  PetscFinalized(PetscBool  *isFinalized)
% https://petsc.org/release/docs/manualpages/Sys/PetscFinalized

%#codegen -args {}
finalized = int32(0);
errCode = int32(-1);

if ~isempty(coder.target)
    coder.cinclude('petsc4m.h');
    b = coder.opaque('PetscBool');
    errCode = coder.ceval('PetscFinalized', coder.wref(b));

    toplevel = nargout>2;
    if errCode && (toplevel || m2c_debug)
        m2c_error('petsc:RuntimeError', 'PetscFinalized returned error code %d\n', errCode)
    end

    finalized = coder.ceval(' ', b);
end
end
