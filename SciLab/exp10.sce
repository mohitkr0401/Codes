clc;
clear;
disp('AAYUSH CHAUHAN');
disp('04176803121');
n=input("no")
rev=0
while(n>0)
    a=modulo(n,10)
    rev=rev*10+a;
    n=floor(n/10);
end
disp("Reverse of the Number is: ")
disp(rev)
