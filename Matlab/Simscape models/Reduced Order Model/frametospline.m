% Create a new model
model = 'FrameToSplineExample';
open_system(new_system(model));

% Add solid blocks
add_block('sm_lib/Body Elements/Brick Solid', [model '/BaseSolid']);
add_block('sm_lib/Body Elements/Brick Solid', [model '/FollowerSolid']);

% Add a World Frame block
add_block('sm_lib/Frames and Transforms/World Frame', [model '/WorldFrame']);

% Add Transform Sensor blocks
add_block('sm_lib/Frames and Transforms/Transform Sensor', [model '/TransformSensor1']);
add_block('sm_lib/Frames and Transforms/Transform Sensor', [model '/TransformSensor2']);

% Add PS-Simulink Converter blocks
add_block('sm_lib/simscape/Utilities/PS-Simulink Converter', [model '/PS2SimX1']);
add_block('sm_lib/Simscape/Utilities/PS-Simulink Converter', [model '/PS2SimY1']);
add_block('sm_lib/Simscape/Utilities/PS-Simulink Converter', [model '/PS2SimZ1']);
add_block('sm_lib/Simscape/Utilities/PS-Simulink Converter', [model '/PS2SimX2']);
add_block('sm_lib/Simscape/Utilities/PS-Simulink Converter', [model '/PS2SimY2']);
add_block('sm_lib/Simscape/Utilities/PS-Simulink Converter', [model '/PS2SimZ2']);

% Add a Spline block
add_block('simulink/Math Operations/Spline', [model '/SplineLine']);

% Connect the Transform Sensor blocks to the frames
add_line(model, 'WorldFrame/RConn', 'TransformSensor1/B');
add_line(model, 'BaseSolid/RConn1', 'TransformSensor1/F');
add_line(model, 'WorldFrame/RConn', 'TransformSensor2/B');
add_line(model, 'FollowerSolid/RConn1', 'TransformSensor2/F');

% Configure the Transform Sensor blocks to measure translation
set_param([model '/TransformSensor1'], 'TranslationMeasurement', 'on');
set_param([model '/TransformSensor2'], 'TranslationMeasurement', 'on');

% Connect Transform Sensor outputs to PS-Simulink Converters
add_line(model, 'TransformSensor1/Tx', 'PS2SimX1/R');
add_line(model, 'TransformSensor1/Ty', 'PS2SimY1/R');
add_line(model, 'TransformSensor1/Tz', 'PS2SimZ1/R');
add_line(model, 'TransformSensor2/Tx', 'PS2SimX2/R');
add_line(model, 'TransformSensor2/Ty', 'PS2SimY2/R');
add_line(model, 'TransformSensor2/Tz', 'PS2SimZ2/R');

% Connect PS-Simulink Converters to Spline block
% Assuming Spline block has inputs [X; Y; Z] for defining points
% Here we demonstrate using 'mux' blocks to combine the signals into vectors
add_block('simulink/Signal Routing/Mux', [model '/Mux1']);
add_block('simulink/Signal Routing/Mux', [model '/Mux2']);
set_param([model '/Mux1'], 'Inputs', '3');
set_param([model '/Mux2'], 'Inputs', '3');
add_line(model, 'PS2SimX1/1', 'Mux1/1');
add_line(model, 'PS2SimY1/1', 'Mux1/2');
add_line(model, 'PS2SimZ1/1', 'Mux1/3');
add_line(model, 'PS2SimX2/1', 'Mux2/1');
add_line(model, 'PS2SimY2/1', 'Mux2/2');
add_line(model, 'PS2SimZ2/1', 'Mux2/3');
add_line(model, 'Mux1/1', 'SplineLine/1');
add_line(model, 'Mux2/1', 'SplineLine/2');

% Update the model to reflect changes
set_param(model, 'SimulationCommand', 'update');
