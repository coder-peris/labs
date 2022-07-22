clc;
close all;
clear all;
i=1;
for t=-2:0.001:2
    if (t==0)
        x(i)=1;
    else
        x(i)=0;
    end;
    i=i+1;
end;
t=-2:0.001:2;
subplot(2,1,1);
plot(t,x);
xlabel('time');
ylabel('amplitude');
title('Unit-impulse(continuous)/Peris/54');
grid on;
i=1;
for t=-2:0.001:2
    if (t==0)
        x(i)=1;
    else
        x(i)=0;
    end;
    i=i+1;
end;
t=-2:0.001:2;
subplot(2,1,2);
stem(t,x);
xlabel('time');
ylabel('amplitude');
title('Unit-impulse(discrete)/Peris/54');
grid on;