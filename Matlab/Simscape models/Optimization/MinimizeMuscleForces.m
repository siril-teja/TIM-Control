function cost = MinimizeMuscleForces(fsum)
%MINIMIZEMUSCLEFORCES
%
% The MinimizeMuscleForces function defines a custom requirement used in the
% graphical SDOTOOL environment.

% The |vals| return argument is the value returned to the SDOTOOL
% optimization solver.
%
% The |data| input is a structure with fields containing design variable
% values and logged simulation data. For example, if SDOTOOL is configured
% to optimize a design variable set |DesignVars| and the custom requirement
% configured to log a signal |Sig| the |data| structure has fields as
% follows:
%
% data.DesignVars    %Design variable values
      %Logged signal when simulating model with |DesignVars|
cost = fsum;
%
% If SDOTOOL is configured to optimize with an uncertain variables set the
% |data| structure includes fields with logged signals when simulating the
% model with |DesignVars| and uncertain values:
%
% data.Uncertain.Sig
%
% For an example of a custom requirement function see:
% - openExample('sldo/DesignOptimizationToMeetACustomObjectiveGUIExample').
%

end