n=50;p=0.4;
mea=n*p;sigma=sqrt(n*p*(1-p));
x=((0:n)-mea)/sigma;
clf()
plot2d(x,sigma*binomial(p,n));
deff('y=Gauss(x)','y=1/sqrt(2*%pi)*exp(-(x.^2)/2)');
plot2d(x,Gauss(x),style=2);

