function val = PETSC_PCKSP% Obtain PETSC constant PCKSP

coder.inline('always');

val = petscGetString('PCKSP');
end
