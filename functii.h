#ifndef TEST_H
#define TEST_H

double integralaTrapez(double a,double b,unsigned int n,double(*pf)(double));

double integralaDreptunghi(double a,double b,unsigned int n,double(*pf)(double));

double integralaSimpson(double a,double b,unsigned int n,double (*pf)(double));

double f(double);

struct MENU_ITEM{
	char *nume;
	double (*f)(double a,double b,unsigned int n,double (*)(double));

};

/*struct MENU_ITME meniu[]{
	{"Calculul integralei prin metoda trapezelor",integralaTrapez},
	{"Calculul integralei prin metoda dreptunghiurilor ",integralaDreptunghi},
	{"Calculul integralei prin metoda Simpson ",integralaSimpson}
};

*/

int menu(struct MENU_ITEM meniu[],unsigned int nf, char *msg);


#endif
