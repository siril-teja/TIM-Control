% Open the main Simulink model
modelName = 'ROMmodel_C4_C5'; % Change to your actual main model name
open_system(modelName);

% Find the existing Model Reference block
refBlock = find_system(modelName, 'BlockType', 'ModelReference', 'ModelName', 'Main_C4_C5');

% Replace with the protected model (.slxp)
if ~isempty(refBlock)
    set_param(refBlock{1}, 'ModelName', 'Main_C4_C5.slxp');
    disp('Successfully replaced the Model Reference block with the Protected Model.');
else
    disp('Model Reference block not found. Ensure the block is correctly named.');
end
