%Plot the autocorrelation sequence of sine wave with frequency 1 Hz,
%sampling frequency is 200 Hz.
clear all;
A=1;
f=1;
fs=200;
w=2*pi*(f/fs);
t=(0:0.001:1024);
x=A*sin(w*t);
subplot(2,1,1);
plot(t,x);
title('Auto correlation/Peris/54');
xlabel('t');
ylabel('x(t)');
grid on;
y=xcorr(x);
subplot(2,1,2);
plot(y);
xlabel('t');
ylabel('y(t)');
grid on;