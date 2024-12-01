
% Add the .jar file to the Java classpath
javaaddpath('C:\Users\Siril TD\Desktop\TIM Control\Matlab\Hardware Integration\Loadcell\ATINetFT.jar');

% List all available classes in the Java path
classes = javaclasspath('-dynamic');
disp(classes);
 

