function val = PETSC_KSPPREONLY
% Obtain PETSC constant KSPPREONLY

coder.inline('always');

val = 'sppreonly';
end