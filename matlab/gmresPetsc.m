function varargout = gmresPetsc(varargin)
% Solves a sparse system using GMRES with a right preconditioner
%
% Syntax:
%    x = gmresPetsc(A, b) solves a sparse linear system using PETSc's GMRES
%    solver with a right preconditioner. Matrix A can be in MATLAB's built-in
%    sparse format or in CRS format with fields 'row_ptr', 'col_inds', and 'vals'.
%     The default preconditioner is ILU0.
%
%    x = gmresPetsc(A, b, restart)
%    allows you to specify the restart parameter for GMRES. The default
%    value is 30. You can preserve the default value by passing [].
%
%    x = gmresPetsc(A, b, restart, rtol, maxiter)
%    allows you to specify the relative tolerance and the maximum number
%    of iterations. Their default values are 1.e-5 and 10000, respectively.
%    Use 0 or [] to preserve default values of rtol and maxiter.
%
%    x = gmresPetsc(A, b, restart, rtol, maxiter, x0)
%    takes an initial solution in x0. Use 0 or [] to preserve the default
%    initial solution (all zeros).
%
%    x = gmresPetsc(A, b, restart, rtol, maxit, x0, pctype, opts)
%    allows you to specify a preconditioner (such as PETSC_PCHYPRE) and its
%    options in a string (such as '-pc_hypre_boomeramg_coarsen_type HMIS').
%
%    [x, flag, relres, iter, reshis, times] = gmresPetsc(___)
%    returns the solution vector x, the flag (KSPConvergedReason), relative
%    residual, number of iterations, history of residual used in convergence
%    test (typically preconditioned residual), and the execution times in
%    setup and solve.
%
% SEE ALSO: gmresHypre

if nargin==0
    help gmresPetsc
    return;
end

if issparse(varargin{1})
    [Arows, Acols, Avals] = crs_matrix(varargin{1});
else
    assert(isstruct(varargin{1}));
    Arows = varargin{1}.row_ptr;
    Acols = varargin{1}.col_ind;
    Avals = varargin{1}.val;
end

next_index = 2;

if nargin<next_index
    error('The right hand-side must be specified');
else
    b = varargin{next_index};
end

if nargin >= next_index + 1 && ~isempty(varargin{next_index + 1})
    opts = [' -ksp_gmres_restart ' int2str(varargin{next_index + 1})];
else
    opts = ' -ksp_gmres_restart 30';
end

if nargin >= next_index + 2 && ~isempty(varargin{next_index + 2})
    rtol = varargin{next_index + 2};
else
    rtol = PetscReal(0);
end

if nargin >= next_index + 3 && ~isempty(varargin{next_index + 3})
    maxiter = int32(varargin{next_index + 3});
else
    maxiter = int32(0);
end

if nargin >= next_index + 4 && ~isempty(varargin{next_index + 4})
    x0 = varargin{next_index + 4};
else
    x0 = PetscScalar(zeros(0, 1));
end

if nargin >= next_index + 5 && ~isempty(varargin{next_index + 5})
    pctype = varargin{next_index + 5};
else
    pctype = '';
end

if nargin >= next_index + 6 && ~isempty(varargin{next_index + 6})
    opts = [opts ' ' varargin{next_index + 6}];
end

[varargout{1:nargout}] = petscSolveCRS(Arows, Acols, PetscScalar(Avals), ...
    PetscScalar(b), PETSC_KSPGMRES, PetscReal(rtol), maxiter, pctype, 'right', PetscScalar(x0), opts);
end

function test %#ok<DEFNU>
%!test
%! A = gallery('wathen', 10, 10);
%! b = A * ones(length(A), 1);
%! rtol = 10*eps(class(PetscReal(0))).^(1/2);

%! [x,flag,relres,iter,reshis,times] = gmresPetsc(A, b, [], rtol);
%! assert(norm(b - A*double(x)) < rtol * norm(b))

end
