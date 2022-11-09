function testall(varargin)
%TESTALL  Test files with test blocks
%
%  testall [file1] [file2] ...
%
%  It will test a list of files. Without any argument, it will test all
%  the MATLAB files with a built-in test block.

olddir = pwd;

if exist('OCTAVE_VERSION', 'builtin') % Bypass a bug in Octave
    addpath(fullfile(petsc4m_root, 'tests'));
    cleanup = onCleanup(@()cd(olddir); rmpath(fullfile(petsc4m_root, 'tests')));
else
    cleanup = onCleanup(@()cd(olddir));
end

cd(petsc4m_root);

if isempty(varargin)
    files = grep_files('./*.m', '\n%!test');
else
    files = varargin;
end

for i = 1:length(files)
    fprintf(1, 'Testing %s:\n', files{i});
    [srcdir, ~] = fileparts(files{i});
    if ~isempty(srcdir); cd(srcdir); end
    mtest(files{i});
end

end
