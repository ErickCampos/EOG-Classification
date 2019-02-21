clear all;
clc;

load out3.txt;

eog = out3;

%[linl= col] = size(lin);

%eog = (5-0).*rand(1000, 1) + 0;

plot(eog);
%xlim([0 1500]);
grid on;


set(gca, 'YTick', 0:0.1:5);
xlabel('Leituras', 'fontsize', 20);
ylabel('Voltagem', 'fontsize', 20);
