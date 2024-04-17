h = scf();
Mean = [0 0 0 -2];
Std2 = [0.2 1.0 5.0 0.5];
cols = [1 2 3 4];
nf = size(cols,"*");
lgd = [];
for k = 1 : nf
  x = linspace(-5,5,1000);
  P=cdfnor("PQ",x,Mean(k)*ones(x),sqrt(Std2(k))*ones(x));
  plot(x,P)
  str = msprintf("Mean=%s, Std^2=%s",string(Mean(k)),string(Std2(k)));
  lgd($+1) = str;
end
for k = 1 : nf
h.children.children.children(nf - k + 1).foreground = cols(k);
end
legend(lgd);
