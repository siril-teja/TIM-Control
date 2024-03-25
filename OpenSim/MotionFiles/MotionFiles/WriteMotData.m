function WriteMotData_C(nRows,nColumns,range,Data,optionType,optionVel) 

% Adila Quesadilla Papaya
% Last Updated: November 5th 2010
% 
% This function takes the input: nRows, nColumns, range and Data
% and outputs the .mot file to be used as an example input motion file by
% OpenSim for the purpose of running the various toolboxes.
% 
%% INPUTS
% nRows = number of rows
% nColumns = number of columns
% range = [tstart tend]
% Data = Joint Coordinate in units of degrees 
% optionType: set to 1 for a .mot output file, set to 2 for a .sto output
% file.
% optionVel: set to 1 if we want that data included, else set to 0

%% OUTPUTS
% MotionFile.mot or MotionFile.sto motion file containing the Joint Coordinates/Angles to be
% used by OpenSim
% You can call the Motion File whatever you want -- just change the
% .../MotionFile_C_.mot or .../MotionFile_C_.sto part 

% Note: an easy way to get the path name, is to just copy and paste (or,
% drag and drop) a file from the same folder into the Matlab window. 

if optionType == 1 %.mot file
  % This is the required format for a .mot file:
% name NameOfFile 
% datacolumns ? 
% datarows ?
% range tStart tEnd
% endheader
%
    fid = fopen('/Users/NurAdila/Desktop/MotionFile_C_.mot','w')
    fprintf(fid,'name MotionFile_C_ \n');
    fprintf(fid,'datacolumns %d \n',nColumns);
    fprintf(fid,'datarows %d\n',nRows);
    fprintf(fid,'range %f %f\n',range(1),range(2));
    fprintf(fid,'endheader\n');
    fprintf(fid,'time\t');
end

if optionType == 2 %.sto file
   % This is the required format for a .sto file: 
% NameOfFile
% nRows=?
% nColumns=?
% endheader
%
    fid = fopen('/Users/NurAdila/Desktop/MotionFile_C_.sto','w')
    fprintf(fid,'name MotionFile_C_ \n');
    fprintf(fid,'nRows=%d\n',nRows);
    fprintf(fid,'nColumns=%d\n',nColumns);
    fprintf(fid,'endheader\n');
    fprintf(fid,'time\t');
end	

%%%%%%%% Code to generate the first line detailing the DOF %%%%%%%%
if optionVel ~=1 %If we just want the joint coordinates sans joint velocities
    fprintf(fid,'flex_extension \t lat_bending \t axial_rotation\t');
    fprintf(fid, '\n');
    fprintf(fid,'\t %f\t%f\t%f\t%f\n',Data)
end

%If you need the velocities as well 
if optionVel==1 
    fprintf(fid,'flex_extension \t lat_bending \t axial_rotation\t');
    fprintf(fid,'flex_extension_u \t lat_bending_u \t axial_rotation_u\t'); 	
    fprintf(fid,'\n')
    fprintf(fid,'\t %f\t %f\t %f\t %f\t %f\t %f\t %f\n',Data);
end

