function val = PETSC_KSPMINRES
% Obtain PETSC constant KSPMINRES

coder.inline('always');

val = 'spminres';
end