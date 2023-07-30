%Chebyshev2
clc;
clear all;
close all;
wp= 0.2*pi;
ws=0.3*pi;
rp= 1;
rs= 15;
[n,wn]= cheb2ord(wp,ws,rp,rs);
[b,a]= cheby2(n,rp,wn);
sys= tf(b,a);
figure;
freqs(b,a);
title('frequency response/54');
figure;
pzmap(sys);
title('poles and zeros/54');
figure;
impulse(b,a);
[bz,az]= impinvar(b,a,10);
figure;
dimpulse(bz,az);
figure;
dstep(bz,az);