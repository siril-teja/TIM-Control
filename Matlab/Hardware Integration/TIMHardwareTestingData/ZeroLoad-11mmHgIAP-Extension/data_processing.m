% Use current folder
folderPath = pwd;
outputFile = fullfile(folderPath, 'ProcessedSensorData.xlsx');

% Initialize result storage
pressureLevels = 0:6;
dataSummary = [];

% Loop through each file
for i = 0:6
    % Construct file name and full path
    fileName = sprintf('data%d.txt', i);
    fullPath = fullfile(folderPath, fileName);
    
    % Read file content
    opts = delimitedTextImportOptions("NumVariables", 11);
    opts.DataLines = [1, Inf];
    opts.Delimiter = ",";
    opts.ExtraColumnsRule = "ignore";
    opts.ConsecutiveDelimitersRule = "join";
    opts = setvartype(opts, "string");  % read all as string then convert

    rawData = readtable(fullPath, opts);

    % Convert to numeric (columns 4 to 9 are Fx, Fy, Fz, Tx, Ty, Tz)
    numericData = str2double(rawData{:,4:9});

    % Calculate mean and std dev
    means = mean(numericData, 1, 'omitnan');
    stds = std(numericData, 0, 1, 'omitnan');

    % Store summary
    dataSummary = [dataSummary; i, means, stds];
end

% Prepare headers
headers = {'Pressure_bar', ...
           'Fx_mean', 'Fy_mean', 'Fz_mean', 'Tx_mean', 'Ty_mean', 'Tz_mean', ...
           'Fx_std',  'Fy_std',  'Fz_std',  'Tx_std',  'Ty_std',  'Tz_std'};

% Write to Excel
outputTable = array2table(dataSummary, 'VariableNames', headers);
writetable(outputTable, outputFile);

disp('Processing complete. Data saved to:');
disp(outputFile);
