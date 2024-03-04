#include "functii.h"
#include <stdio.h>


int main(void)
{
	double v1,i1,i2;
	unsigned int precizie;
	double (*pf)(double);
	char s[]="Alegeti o optiune",*p;
	p=s;
	int option;

	struct MENU_ITEM meniu[]={	
	{"Calculul integralei prin metoda trapezelor",integralaTrapez},
	{"Calculul integralei prin metoda dreptunghiurilor ",integralaDreptunghi},
	{"Calculul integralei prin metoda Simpson ",integralaSimpson}
	
	};

	pf=&f;


	option=menu(meniu,3,p);

	printf("Cele doua capetele de intervale sunt egale cu :\n");
	scanf("%lf %lf",&i1,&i2);

	printf("Alegeti o precizie ,intre 1-999999 , cu cat este mai mare cu atat calculul este mai bun\n");
	scanf("%u",&precizie);

	switch(option)
	{
		case 1:
			v1=integralaTrapez(i1,i2,precizie,pf);
	        printf("Valoarea functiei cu metoda Trapezului este %lf \n",v1);
		break;
		case 2:
			v1=integralaDreptunghi(i1,i2,precizie,pf);
	        printf("Valoarea functiei cu metoda Trapezului este %lf \n",v1);
		break;
		case 3:
			v1=integralaSimpson(i1,i2,precizie,pf);
	        printf("Valoarea  functiei cu metoda Simpson este %lf \n",v1);
		break;
		default:
			break;
	}
	return 0;

}
