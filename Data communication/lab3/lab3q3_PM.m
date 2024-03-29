clc;
close all;
clear all;
t=0:0.001:1;
fm=input('Enter message frequency');
am=input('Enter message amplitude');
fc=input('Enter carrier frequency');
ac=input('Enter carrier amplitude');
b=input('Enter modulation index');
x=am*sin(2*pi*fm*t);
subplot(3,1,1);
plot(t,x);
xlabel('time');
ylabel('amplitude');
title('Message-signal/Peris/54');
grid on;
c=ac*sin(2*pi*fc*t);
subplot(3,1,2);
plot(t,c);
xlabel('time');
ylabel('amplitude');
title('Carrier-signal/Peris/54');
grid on;
A=sin(2*pi*fc*t+b*cos(2*pi*fm*t));
subplot(3,1,3);
plot(t,A);
xlabel('time');
ylabel('amplitude');
title('Phase-modulation/Peris/54');
grid on;