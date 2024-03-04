#include "functii.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

double integralaTrapez(double a, double b, unsigned int n, double(*pf)(double))
{
	double sum;
	double x;
	double dx;
	double eps=1e-4;

	dx=(b-a)/n;

	sum=((*pf)(a)+(*pf)(b))/2;

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;
}

double f(double x)
{

  return sin(exp(2*x)+3);

    //return exp(-(x*x));

	//return x;
	
	//return sin(x+3*x)*cos(5*x);
}

double integralaDreptunghi(double a,double b,unsigned int n,double (*pf)(double))
{
	double sum,x,dx,eps=1e-4;
	dx=(b-a)/n;

	sum=((*pf)(a))*dx;

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;

}
double integralaSimpson(double a,double b,unsigned int n,double (*pf)(double))
{
	double sum,x,dx,eps=1e-4;
	dx=(b-a)/n;

	sum=((*pf)(a)+(*pf)(b)+(*pf)((a+b)/2));

	for(x=a+dx;fabs(x+dx-b)>eps;x+=dx)
	{
		sum+=((*pf)(x));
	}

	sum*=dx;

	return sum;

}


int menu(struct MENU_ITEM meniu[],unsigned int nf, char *msg)
{
	int optiune;
	register unsigned int i;
	puts(msg);
	
	for(i=0;i<nf;i++)
	{
		printf("\t%d - %s\n",i+1,meniu[i].nume);
	}

	printf("\t0 - exit\n");
	printf("\t >> ");
	scanf("%d",&optiune);
	
	return(optiune);

}

