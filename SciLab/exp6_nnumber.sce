clc;
clear;
disp('MOHIT KUMAR');
disp('04076803121');
n=input("Enter the Number of Terms to Find  the AVG");
sum=0
for i=1 : n
    x=input("Enter the Number ")
    sum=sum+x
end
avg=sum/n
disp(avg)
