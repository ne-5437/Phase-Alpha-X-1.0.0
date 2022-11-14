clc;clear;close all;
%percentage is used for writing commands in any window

%inputs:
a=[1 2 3 4;3 4 2 1;5 6 7 8;8 7 6 5];
b=[1 1 1 1;4 3 2 1;2 2 2 2;5 6 7 8];

%Addition:
x1=a+b; 
disp('addition');
disp(x1);
 
%Subtraction:
x2=a-b;
disp('subtraction');
disp(x2);

%multiplication:
x3=a*b;
disp('multiplication');
disp(x3);

%scalar multiplication:
x4=a.*b;
disp('scalar multiplication');
disp(x4);

%division 01:
x5=a/b;
disp('division 01');
disp(x5);

%scalar division 01:
x6=a./b;
disp('scalar division 01');
disp(x6);

%division 02;
x7=a\b;
disp('division 02');
disp(x7);

%scalar division 02;
x8=a.\b;
disp('scalar division 02');
disp(x8);

%power of a:
x9=a^2;
disp('power of a');
disp(x9);

%scalar power of a:
x10=a.^2;
disp('scalar power of of a');
disp(x10);

%inverse of a:
x11=inv(a);
disp('inverse of a');
disp(x11);

%pseudo inverse of a:
x12=pinv(a);
disp('pseudo inverse of a');
disp(x12);

%determinant
x13=det(a);
disp('determinant of a');
disp(x13);

%rank of a:
x14=rank(a);
disp('rank of a');
disp(x14);

%diagonal of a:
x15=diag(a);
disp('diagonal of a');
disp(x15);

%transpose of a=a'
x16=transpose(a);
disp('transpose of a');
disp(x16);




