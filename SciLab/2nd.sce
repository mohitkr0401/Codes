mu=0;
sigma=1;

xmin=mu-4*sigma;
xmax=mu+4*sigma;
xstep=0.1;

x=xmin:xstep:xmax;

y=(1/(sigma*sqrt(2*%pi)))*exp(-((x-mu).^2)/(2*sigma^2));

plot(x,y,"b-","LineWidth",2,"XLabel","X","YLabel","PDF");
