function val = PETSC_PCMG% Obtain PETSC constant PCMG

coder.inline('always');

val = petscGetString('PCMG');
end
