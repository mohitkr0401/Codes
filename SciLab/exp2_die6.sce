clc;
disp('MOHIT KUMAR');
disp('04076803121');
n=1000;
count=0;
for i=1:n
    y1=ceil(rand(1)*6);
    y2=ceil(rand(1)*6);
    if((y1+y2)==6)
        count=count+1;
    end
    prob(i)=count/i;
end
prob1=count/n;
disp(prob1)
plot(prob)
