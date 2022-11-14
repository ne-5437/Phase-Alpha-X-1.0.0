clc;clear;close all;

tmin=-5;
tmax=5;
dt=0.01;
t=tmin:dt:tmax;
x1=1;
x2=0;

subplot(2,2,1);
ut1=(x1.*(t>=0))+(x2.*(t<0));
plot(t,ut1,'r','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Unit Step - 1602-21-735-012');
grid on;

subplot(2,2,2);
ut2=(x1.*(t==0))+(x2.*(t~=0));
plot(t,ut2,'b','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Unit Impluse - 1602-21-735-012');
grid on;

subplot(2,2,3);
ut3=(t.*(t>=0))+(x2.*(t<0));
plot(t,ut3,'g','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Unit Ramp - 1602-21-735-012');
grid on;

subplot(2,2,4);
ut4=(t.^2)/2;
plot(t,ut4,'m','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Parabola - 1602-21-735-012');
grid on;