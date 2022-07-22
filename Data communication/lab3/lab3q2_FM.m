


clc;
close all;
clear all;
t=0:0.001:1;
fm=input('Enter message frequency');
am=input('Enter message amplitude');
fc=input('Enter carrier frequency');
ac=input('Enter carrier amplitude');
kf=input('Enter frequency sensitivity');
x=am*cos(2*pi*fm*t);
c=ac*cos(2*pi*fc*t);
b=(kf*am)/fm;
A=ac.*cos(2*pi*fc*t+(b.*sin(2*pi*fm*t)));
subplot(3,1,1);
plot(t,x);
xlabel('time');
ylabel('amplitude');
title('Message-signal/Peris/54');
grid on;
subplot(3,1,2);
plot(t,c);
xlabel('time');
ylabel('amplitude');
title('Carrier-signal/Peris/54');
grid on;
subplot(3,1,3);
plot(t,A);
xlabel('time');
ylabel('amplitude');
title('Frequency-modulation/Peris/54');
grid on;