clc;clear;close all;

tmin=-pi;
tmax=pi;
dt=pi/100;
t=tmin:dt:tmax;
x1=1;
x2=0;
A=2;
f=0.5;

subplot(2,2,1);
xt1=A*sin(2*pi*f*t);
plot(t,xt1,'r','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Sine Function - 1602-21-735-012');
grid on;

subplot(2,2,2);
xt2=A*cos(2*pi*f*t);
plot(t,xt2,'b','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Cosine Function - 1602-21-735-012');
grid on;

a=2;
subplot(2,2,3);
xt3=exp(a.*(t));
plot(t,xt3,'g','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Increasing Exp - 1602-21-735-012');
grid on;

subplot(2,2,4);
xt4=exp(-a.*(t));
plot(t,xt4,'m','linewidth',1.5);
xlabel('Time in sec');
ylabel('Amplitude');
title('Decreasing Exp - 1602-21-735-012');
grid on;