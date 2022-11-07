function mex_crs_createFromAIJ
% Build script for crs_createFromAIJ

target = ['../../crs_createFromAIJ.' mexext];

if ~exist('isnewer', 'file') || ...
        ~isnewer(target, 'mex_crs_createFromAIJ.m', 'crs_createFromAIJ_mex.c')

    fprintf(1, 'Entering %s\n', pwd);

    build_cmd = ['mex -I../../../include ', ...
        ' crs_createFromAIJ.c crs_createFromAIJ_mex.c -output ' target];

    disp(build_cmd);
    if exist('OCTAVE_VERSION', 'builtin')
        build_cmd = ['m' build_cmd];
    end
    eval(build_cmd); %#ok<EVLEQ>
else
    fprintf(1, [target(length(fileparts(target)) - 3:end) ' is up to date.\n']);
end

end