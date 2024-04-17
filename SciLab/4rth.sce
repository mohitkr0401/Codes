n=50;p=0.4;
mea=n*p;sigma=sqrt(n*p*(1-p));
x=((0:n)-mea)/sigma;
clf()
plot2d(x,sigma*binomial(p,n));
deff('y=Gauss(x)','y=1/sqrt(2*%pi)*exp(-(x.^2)/2)');
plot2d(x,Gauss(x),style=2);

function pr=binomial2(p,n)
    x=poly(0,'x');pr=coeff((1-p+x)^n).*horner(x^(0:n),p);
endfunction

p=1/3;n=5;
binomial(p,n)--binomial2(p,n)

p=1/3;n=5;
cnks=gamma(n+1)./(gamma(1:n+1).*gamma(n+1:-1:1));
x=poly(0,'x');
pr=cnks.*horner(x.^(0:n).*(1-x)^(n:-1:0),p);
pr-binomial(p,n)
