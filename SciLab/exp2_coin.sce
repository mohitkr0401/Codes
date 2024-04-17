clc;
clf;
clear;
n=10000;
heads=0;;
tails=0;
for i=1:n
    if(rand()<0.5)then
        heads=heads+1;
    else
        tails=tails+1;
    end
end
prob_heads=heads/n;
prob_tails=tails/n;
disp(prob_heads)
disp(prob_tails)
plot([prob_heads,probab_tails])
