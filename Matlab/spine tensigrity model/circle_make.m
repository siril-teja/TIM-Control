function circle_make(P1,P2,P3)
syms x0 y0 z0
P0us=[x0;y0;z0];

v1=cross(P2-P1,P3-P1);
v1=v1/norm(v1);

eq1=dot(P0us-P1,v1)==0;
eq2=dot(P0us-(P2+P1)/2,P2-P1)==0;
eq3=dot(P0us-(P3+P1)/2,P3-P1)==0;

S= solve(eq1,eq2,eq3,[ x0,y0,z0]);

x0s=double(S.x0);
y0s= double(S.y0);
z0s= double(S.z0);

P0=[x0s;y0s;z0s];
v2 = P1-P0;
R = norm(v2);
v2 = v2/R;
v3 = cross(v2,v1);
v3 = v3/norm(v3);

t = linspace(0,2*pi);
P = repmat(P0,1,numel(t)) + R*(v2*cos(t) + v3*sin(t));
plot3(P(1,:),P(2,:),P(3,:),'k','LineWidth',5) % This should give you your circle
hold on
end

