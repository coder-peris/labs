clc;
close all;
clear all;
x1=input('Enter the input sequence x[n]:');
x2=input('Enter the starting time index of x[n]:');
h1=input('Enter the impulse response h[n]:');
h2=input('Enter the starting time index of h[n]:');
y=conv(x1,h1);
n=x2+h2:length(y)+x2+h2-1;
disp('The convoluted sequence is given below:');
stem(n,y);
xlabel('time');
ylabel('amplitude');
title('Linear convolution');