clear;
clc;
n=5;%no. of elements
l=5;%length of leg
ANG=30;%angle
act=6;%radius of circle of tensions
spk = 50;%spring constants

act_top=(3);%node at which top tensions act
act_bottom= 3;%node at which bottom tensions act

free_lv= 2*l*sind(ANG);%free length of string vertical
free_lh= sqrt(2)*l*cosd(ANG);%free length of string horizontal

rot=sym(zeros(3*(n-1),3));%rotation matrix

iniPOS=zeros(n,15);%initial positions of all points of body
transPOS=sym(zeros(n-1,15));%translated position of all points of body

iniHUB=sym(zeros(2,12));%initial positions of hub points
transHUB=sym(zeros(1,12));%translated positions of hub points

direct_V=sym(zeros(n-1,12));%direction of vertical forces
direct_H= sym(zeros(n-1,12));%direction of horizontal forces
direct_ten= sym(zeros(8,3));%direction of tensions

vertF=sym(zeros(n-1,12));%vertical force matrix
horiF= sym(zeros(n-1,12));%horizontal force matrix
tens_for= sym(zeros(8,3));%tension forces


tens_mag=[100;120;0;0;0;0;0;0];

force_eqn= sym(zeros(n-1,3));%force equations

moment_eqn= sym(zeros(n-1,3));%moment equations

% orient_sol=zeros(n,6);


%%setting initial position values%%

%Hub
%1- top, 2- bottomg
for i=1:1:2
        iniHUB(i,1:3)=[-act,0,l*sind(ANG)-2*n*l*sind(ANG)*(i-1)];%A
        iniHUB(i,4:6)=[act,0,l*sind(ANG)-2*n*l*sind(ANG)*(i-1)];%B
        iniHUB(i,7:9)=[0,-act,l*sind(ANG)-2*n*l*sind(ANG)*(i-1)];%C
        iniHUB(i,10:12)=[0,act,l*sind(ANG)-2*n*l*sind(ANG)*(i-1)];%D
        circle_make(iniHUB(i,1:3).',iniHUB(i,4:6).',iniHUB(i,7:9).');     
end

%Positions of body
for i=0:1:n-1
    
    iniPOS(i+1,1:3) = [0,0,(-2*i*l*sind(ANG))];%O
    iniPOS(i+1,4:6) = [(-l*cosd(ANG)),0,(-2*i*l*sind(ANG))+(-l*sind(ANG))];%A
    iniPOS(i+1,7:9) = [(l*cosd(ANG)),0,(-2*i*l*sind(ANG))+(-l*sind(ANG))];%B
    iniPOS(i+1,10:12) = [0,(-l*cosd(ANG)),(-2*i*l*sind(ANG))+(l*sind(ANG))];%C
    iniPOS(i+1,13:15) = [0,(l*cosd(ANG)),(-2*i*l*sind(ANG))+(l*sind(ANG))];%D
end

%Plottiing the graph 
for j=1:1:n  
    for k=4:3:13
        plot3([iniPOS(j,1),iniPOS(j,k)],[iniPOS(j,2),iniPOS(j,k+1)],[iniPOS(j,3),iniPOS(j,k+2)],'r','LineWidth',5);
        hold on
    end 
    hold on
end

for j=1:1:n-1  
    for m=4:3:13
        plot3([iniPOS(j,m),iniPOS(j+1,m)],[iniPOS(j,m+1),iniPOS(j+1,m+1)],[iniPOS(j,m+2),iniPOS(j+1,m+2)],'b','LineWidth',.5);
        hold on
    end
    for o=4:3:7
        plot3([iniPOS(j,o),iniPOS(j+1,o+6)],[iniPOS(j,o+1),iniPOS(j+1,o+7)],[iniPOS(j,o+2),iniPOS(j+1,o+8)],'b','LineWidth',.5);
        %%plot3([iniPOS(j,o),iniPOS(j+1,o+13)],[iniPOS(j,o+1),iniPOS(j+1,o+14)],[iniPOS(j,o+2),iniPOS(j+1,o+15)],'b','LineWidth',.5);
        hold on
    end
    plot3([iniPOS(j,4),iniPOS(j+1,13)],[iniPOS(j,5),iniPOS(j+1,14)],[iniPOS(j,6),iniPOS(j+1,15)],'b','LineWidth',.5);
    plot3([iniPOS(j,7),iniPOS(j+1,10)],[iniPOS(j,8),iniPOS(j+1,11)],[iniPOS(j,9),iniPOS(j+1,12)],'b','LineWidth',.5);
    
   
    hold on
end

%Orientation matrix
orient = sym('orient_sol',[n-1 6]);

%Trignometrix definitions
Pi = sym('pi');
sinD = @(x) sin(x*Pi/180);
cosD = @(x) cos(x*Pi/180);

%Rotation matrix definition
for j=1:1:n-1
    rot(3*j-2:3*j,:)= [cosD(orient(j,5))*cosD(orient(j,6)),cosD(orient(j,4))*sinD(orient(j,6))+sinD(orient(j,4))*sinD(orient(j,5))*cosD(orient(j,6)),sinD(orient(j,4))*sinD(orient(j,6))-cosD(orient(j,4))*sinD(orient(j,5))*cosD(orient(j,6));-cosD(orient(j,5))*sinD(orient(j,6)),cosD(orient(j,4))*cosD(orient(j,6))-sinD(orient(j,4))*sinD(orient(j,5))*sinD(orient(j,6)),sinD(orient(j,4))*cosD(orient(j,6))+cosD(orient(j,4))*sinD(orient(j,5))*sinD(orient(j,6));sinD(orient(j,5)),-sinD(orient(j,4))*cosD(orient(j,5)),cosD(orient(j,4))*cosD(orient(j,5))];
end

%Translation of hub, only upper
for j=1:1:4
    transHUB(1,3*j-2:3*j)= (rot(1:3,:)*(iniHUB(1,3*j-2:3*j)).').'+ orient(1,1:3);
end

%Translation of positions of body
for i=1:1:n-1
    for j=1:1:5
        transPOS(i,3*j-2:3*j)= (rot(3*i-2:3*i,:)*(iniPOS(i,3*j-2:3*j)+[0,0,(i-1)*free_lv]).').'+ orient(i,1:3)-[0,0,(i-1)*free_lv];
    end
end

%Vertical forces
for i=1:1:n-2
    for j=1:1:4
        direct_V(i,3*j-2:3*j)= -(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(j+1)-2:3*(j+1)))/ (norm(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(j+1)-2:3*(j+1))));
        vertF(i,3*j-2:3*j)= spk*(norm(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(j+1)-2:3*(j+1)))- free_lv)*direct_V(i,3*j-2:3*j);
    end
end

%for n-1 body
for j=1:1:4
    direct_V(n-1,3*j-2:3*j)= -(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(j+1)-2:3*(j+1)))/ (norm(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(j+1)-2:3*(j+1))));
    vertF(n-1,3*j-2:3*j)= spk*(norm(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(j+1)-2:3*(j+1)))- free_lv)*direct_V(n-1,3*j-2:3*j);
end

%Horizontal forces
for i=1:1:n-2
    o=1;
    for j=1:1:2
        for k=3:1:4
            direct_H(i,3*o-2:3*o)= -(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(k+1)-2:3*(k+1)))/ (norm(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(k+1)-2:3*(k+1))));
            horiF(i,3*o-2:3*o)= spk*(norm(transPOS(i,3*(j+1)-2:3*(j+1))- transPOS(i+1,3*(k+1)-2:3*(k+1)))- free_lh)*direct_H(i,3*o-2:3*o);
            o=o+1;
        end
    end
end

a=1;
for j=1:1:2
    for k=3:1:4
        direct_H(n-1,3*a-2:3*a)= -(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(k+1)-2:3*(k+1)))/ (norm(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(k+1)-2:3*(k+1))));
        horiF(n-1,3*a-2:3*a)= spk*(norm(transPOS(n-1,3*(j+1)-2:3*(j+1))- iniPOS(n,3*(k+1)-2:3*(k+1)))- free_lh)*direct_H(n-1,3*a-2:3*a);
        a=a+1;
    end
end

%Force acting on uppermost body
for i=1:1:4
    force_eqn(1,:) = force_eqn(1,:)+ vertF(1,3*i-2:3*i)+horiF(1,3*i-2:3*i);
end

%Forces acting 2 to n-1 bodies
for i=2:n-1
    for j=1:1:4
        force_eqn(i,:)= force_eqn(i,:)+ vertF(i,3*j-2:3*j)- vertF(i-1,3*j-2:3*j)+ horiF(i,3*j-2:3*j)- horiF(i-1,3*j-2:3*j);
    end
end

%Moment acting on uppermost body
%Vertical forces moment
for i=1:1:4
    moment_eqn(1,:)= moment_eqn(1,:) + cross(transPOS(1,3*(i+1)-2:3*(i+1))-transPOS(1,1:3),vertF(1,3*i-2:3*i));
end

%Horizontal forces moment
for i=1:1:2
    moment_eqn(1,:)= moment_eqn(1,:)+ cross(transPOS(1,3*(i+1)-2:3*(i+1))-transPOS(1,1:3),horiF(1,3*(2*i-1)-2:3*(2*i-1))+horiF(1,3*(2*i)-2:3*(2*i)));
end

%Moment on 2 to n-1 bodies
for i=2:n-1
    for j=1:1:4
        moment_eqn(i,:)=moment_eqn(i,:)+ cross(transPOS(i,3*(j+1)-2:3*(j+1))-transPOS(i,1:3),vertF(i,3*j-2:3*j)-vertF(i-1,3*j-2:3*j));
    end
    
    %A-C, A-D, B-C, B-D
    for j=1:1:2
        moment_eqn(i,:)=moment_eqn(i,:)+ cross(transPOS(i,3*(j+1)-2:3*(j+1))-transPOS(i,1:3),horiF(i,3*(2*j-1)-2:3*(2*j-1))+horiF(i,3*(2*j)-2:3*(2*j)));
    end
    
    %C-A, C-B, D-A, D-B
    for j=1:1:2
        moment_eqn(i,:)=moment_eqn(i,:)- cross(transPOS(i,3*(j+3)-2:3*(j+3))-transPOS(i,1:3),horiF(i-1,3*j-2:3*j)+horiF(i-1,3*(j+2)-2:3*(j+2)));
    end
    
end
    
%Force and moment by actuating strings

% 1-A,2-B,3-C,4-D-> top
%5-A,6-B,7-C,8-D-> bottom

%Top
for j=1:4
    direct_ten(j,:)= -(transPOS(act_top,3*(j+1)-2:3*(j+1))- transHUB(1,3*j-2:3*j))/norm((transPOS(act_top,3*(j+1)-2:3*(j+1))- transHUB(1,3*j-2:3*j)));
    tens_for(j,:)= tens_mag(j,:)*direct_ten(j,:);
    force_eqn(act_top,:)=force_eqn(act_top,:)+ tens_for(j,:);
    force_eqn(1,:)=force_eqn(1,:)- tens_for(j,:);
    moment_eqn(act_top,:)=moment_eqn(act_top,:)+ cross((transPOS(act_top,3*(j+1)-2:3*(j+1))-transPOS(act_top,1:3)),tens_for(j,:));
    moment_eqn(1,:)=moment_eqn(1,:)- cross((transHUB(1,3*(j)-2:3*(j))-transPOS(1,1:3)),tens_for(j,:));
end

% Bottom
for j=1:4
    direct_ten(j+4,:)= -(transPOS(act_bottom,3*(j+1)-2:3*(j+1))- iniHUB(2,3*j-2:3*j))/norm((transPOS(act_bottom,3*(j+1)-2:3*(j+1))- iniHUB(2,3*j-2:3*j)));
    tens_for(j+4,:)= tens_mag(j+4,:)*direct_ten(j+4,:);
    force_eqn(act_bottom,:)=force_eqn(act_bottom,:)+ tens_for(j+4,:);
    moment_eqn(act_bottom,:)=moment_eqn(act_bottom,:)+ cross((transPOS(act_bottom,3*(j+1)-2:3*(j+1))-transPOS(act_bottom,1:3)),tens_for(j+4,:));
end


eqn_1=force_eqn==zeros(n-1,3);
eqn_2=moment_eqn==zeros(n-1,3);
eqn_all = [eqn_1;eqn_2];


Sol= vpasolve(eqn_all);

ORIENT=zeros(n-1,6);
NEWPOS=zeros(n,15);
ROT=zeros(3*(n-1),3);
NEWHUB=zeros(1,12);

ORIENT(1,1)=Sol.orient_sol1_1;
ORIENT(1,2)=Sol.orient_sol1_2;
ORIENT(1,3)=Sol.orient_sol1_3;
ORIENT(1,4)=Sol.orient_sol1_4;
ORIENT(1,5)=Sol.orient_sol1_5;
ORIENT(1,6)=Sol.orient_sol1_6;
ORIENT(2,1)=Sol.orient_sol2_1;
ORIENT(2,2)=Sol.orient_sol2_2;
ORIENT(2,3)=Sol.orient_sol2_3;
ORIENT(2,4)=Sol.orient_sol2_4;
ORIENT(2,5)=Sol.orient_sol2_5;
ORIENT(2,6)=Sol.orient_sol2_6;

for j=1:1:n-1
    ROT(3*j-2:3*j,:)= [cosd(ORIENT(j,5))*cosd(ORIENT(j,6)),cosd(ORIENT(j,4))*sind(ORIENT(j,6))+sind(ORIENT(j,4))*sind(ORIENT(j,5))*cosd(ORIENT(j,6)),sind(ORIENT(j,4))*sind(ORIENT(j,6))-cosd(ORIENT(j,4))*sind(ORIENT(j,5))*cosd(ORIENT(j,6));-cosd(ORIENT(j,5))*sind(ORIENT(j,6)),cosd(ORIENT(j,4))*cosd(ORIENT(j,6))-sind(ORIENT(j,4))*sind(ORIENT(j,5))*sind(ORIENT(j,6)),sind(ORIENT(j,4))*cosd(ORIENT(j,6))+cosd(ORIENT(j,4))*sind(ORIENT(j,5))*sind(ORIENT(j,6));sind(ORIENT(j,5)),-sind(ORIENT(j,4))*cosd(ORIENT(j,5)),cosd(ORIENT(j,4))*cosd(ORIENT(j,5))];
end

%Translation of hub, only upper
for j=1:1:4
    NEWHUB(1,3*j-2:3*j)= (ROT(1:3,:)*(iniHUB(1,3*j-2:3*j)).').'+ ORIENT(1,1:3);
end

%Translation of positions of body
for i=1:1:n-1
    for j=1:1:5
        NEWPOS(i,3*j-2:3*j)= (ROT(3*i-2:3*i,:)*(iniPOS(i,3*j-2:3*j)+[0,i*free_lv,0]).').'+ ORIENT(i,1:3)-[0,i*free_lv,0];
    end
end
NEWPOS(n,:)=iniPOS(n,:);



for j=1:1:n  
    for k=4:3:13
        plot3([NEWPOS(j,1),NEWPOS(j,k)],[NEWPOS(j,2),NEWPOS(j,k+1)],[NEWPOS(j,3),NEWPOS(j,k+2)],'r','LineWidth',5);
        hold on
    end 
    hold on
end

for j=1:1:n-1  
    for m=4:3:13
        plot3([NEWPOS(j,m),NEWPOS(j+1,m)],[NEWPOS(j,m+1),NEWPOS(j+1,m+1)],[NEWPOS(j,m+2),NEWPOS(j+1,m+2)],'b','LineWidth',.5);
        hold on
    end
    for o=4:3:7
        plot3([NEWPOS(j,o),NEWPOS(j+1,o+6)],[NEWPOS(j,o+1),NEWPOS(j+1,o+7)],[NEWPOS(j,o+2),NEWPOS(j+1,o+8)],'b','LineWidth',.5);
        %%plot3([NEWPOS(j,o),NEWPOS(j+1,o+13)],[NEWPOS(j,o+1),NEWPOS(j+1,o+14)],[NEWPOS(j,o+2),NEWPOS(j+1,o+15)],'b','LineWidth',.5);
        hold on
    end
    plot3([NEWPOS(j,4),NEWPOS(j+1,13)],[NEWPOS(j,5),NEWPOS(j+1,14)],[NEWPOS(j,6),NEWPOS(j+1,15)],'b','LineWidth',.5);
    plot3([NEWPOS(j,7),NEWPOS(j+1,10)],[NEWPOS(j,8),NEWPOS(j+1,11)],[NEWPOS(j,9),NEWPOS(j+1,12)],'b','LineWidth',.5);
    
   
    hold on
end

%lower strings plot
for i=1:1:4
    plot3([iniHUB(2,3*i-2),NEWPOS(act_bottom,3*i+1)],[iniHUB(2,3*i-1),NEWPOS(act_bottom,3*i+2)],[iniHUB(2,3*i),NEWPOS(act_bottom,3*i+3)],'r','LineWidth',.5);
end

%upper strings
for i=1:1:4
    plot3([NEWHUB(1,3*i-2),NEWPOS(act_top,3*i+1)],[NEWHUB(1,3*i-1),NEWPOS(act_top,3*i+2)],[NEWHUB(1,3*i),NEWPOS(act_top,3*i+3)],'r','LineWidth',.5);
end

circle_make(NEWHUB(1,1:3).',NEWHUB(1,4:6).',NEWHUB(1,7:9).');





