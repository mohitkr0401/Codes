clc;
clear;
disp('MOHIT KUMAR');
disp('04076803121');
N=input("enter the number of terms")
disp("even no")
for i=1:N
    if modulo(i,2)==0
        disp(i)
    else
        continue
    end
end
disp("odd no")
for( i=1:N)
    if modulo(i,2)~=0 then
        disp(i)
    else
        continue
    end
end
