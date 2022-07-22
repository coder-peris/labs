clc;
close all;
clear all;
a=5;
f=3;
w=2*pi*f;
t=0:0.001:1;
y=a*sin(w*t);
subplot(3,1,1);
plot(t,y);
xlabel('time');
ylabel('amplitude');
title('Sinewave/Peris/54');
grid on;
z=rand(1,length(t));
subplot(3,1,2);
plot(t,z);
xlabel('time');
ylabel('amplitude');
title('Noisewave/Peris/54');
grid on;
a=y+z;
subplot(3,1,3);
plot(t,a);
xlabel('time');
ylabel('amplitude');
title('Noise-sine/Peris/54');
grid on;