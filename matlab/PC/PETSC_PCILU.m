function val = PETSC_PCILU
% Obtain PETSC constant PCILU

coder.inline('always');

val = 'cilu';
end
