%Finite Impulse Response
clc;
clear all;
close all;
fp=input('enter passband freq:');
fs=input('enter stopband freq:');
rp=input('enter passband attenuation:');
rs=input('enter stopband attenuation:');
f= input('Enter sampling freq:');
num= -20*log10(sqrt(rp*rs))-13;
dem= 14.6*(fp-fs)/f;
n= ceil(num/dem);
n=abs(n);
wp= 2*fp/f;
ws= 2*fs/f;
wn= (ws+wp)/2;
if(rem(n,2)==0)
    m= n+1;
else
    m=n;
    n=n-1;
end
w=hann(m);
b=fir1(n,wn,'low',w);
freqz(b,1,500,3000);
title('Magnitude and phase response');


%input:
%enter passband freq:1000
%enter stopband freq:1200
%enter passband attenuation:2
%enter stopband attenuation:45
%Enter sampling freq:3000