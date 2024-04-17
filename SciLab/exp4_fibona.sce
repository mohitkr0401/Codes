clc;
clear;
disp('MOHIT KUMAR');
disp('04076803121');
N=input("Enter the Number of Terms: ")
a=0;
b=1;
disp(a);
disp(b)
for i=1:N-2
    c=a+b;
    disp(c)
    a=b;
    b=c
end
