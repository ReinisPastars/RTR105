%% 1.laboratorijas darbs
%% Merijumu datu apstrade
%% Merki:
% * Iemacities apstradat merijumu datus,
% * Iemacities lietot polyfit, polyval funkcijas,
% * Iemacities veidot matlab atskaites izmantojot "publish"
%% Darba programma:
%
%A = imread('grafiks.png');
%
%figure(1),image(A)
%
%figure(1),image([0 100],[10 0],A)
%
%set(gca,'Ydir','normal')
%
%[x,y] = ginput(30)
%
%p = polyfit(x,y,5)
%
%xx = min(x):1:max(x);
%
%yy = polyval(p,xx);
%
%plot(x,y,'o',xx,yy);
%
%grid minor
%
%%Izmantotais sakuma grafiks
%
%<<../grafiks.png>>
%
%%Ar polyfit, polyfind izveidotais grafiks
%
%<<..grafiks_ginput.png>>
%
%%Secina?jumi
%
%Saja darba iemacijos "imread"funkciju un "ginput" funkciju, ar kuru
%nolasiju vertibas no dota grafika attela. Ar "ginput" nolasitos datus
%var parverst grafika, izmantojot "polyfit" un "polyval" funkcijas.
%Apguvu publish funkciju un iemacijos pareizi noformet darbu.
