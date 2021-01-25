#include <stdio.h>
#include <math.h>

double requestposnumber(void){
	double result=0.0;
	while (result <=0){
		printf ("Positive Zahl eingeben:\n");
		scanf ("%lf", &result);
	}
	return result;
}

double calculateHypothenuse(double a, double b){
	return sqrt(a*a+b*b);
}

void showSplash(void){
	printf ("Designed by Rami Chaari\n(c) 2018");
}	