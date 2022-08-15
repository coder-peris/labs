clc;
close all;
clear all;
fc1=input('enter the frequency of 1st sinwave carrier:');
fc2=input('enter the frequency of 2nd sinwave carrier:');
fp=input('enter the frequency of periodic binary pulse(message):');
amp=input('enter the amplitude(For both carrier and binary pulse message):');
amp=amp/2;
t=0:0.001:1;
m=amp.*square(2*pi*fp*t)+amp;
subplot(411);
plot(t,m,'RED');
xlabel('time');
ylabel('amplitude');
title('binary message pulses/Prabesh/55');
legend('message signal m(t)');
grid on;
c1=amp.*sin(2*pi*fc1*t);
subplot(412);
plot(t,c1,'RED');
xlabel('time');
ylabel('amplitude');
title('carrier 1 wave/Prabesh/55');
legend('carrier signal c(t)');
grid on;
c2=amp.*sin(2*pi*fc2*t);
subplot(413);
plot(t,c2,'RED');
xlabel('time');
ylabel('amplitude');
title('carrier 2 wave/Prabesh/55');
legend('carrier signal c(t)');
grid on;
for i=0:1000
    if m(i+1)==0
        mm(i+1)=c2(i+1);
    else
        mm(i+1)=c1(i+1);
    end
end
subplot(414);
plot(t,mm,'RED');
xlabel('time');
ylabel('amplitude');
title('modulated wave/Prabesh/55');
legend('FSK signal x(t)');
grid on;