#include <stdio.h>
#include <math.h>
#include "helper.h"

int main(void){
	printf("Berechnung nach Pythagoras\n");
	
	double A=0.0;
	double B=0.0;
	double C=0.0;
	
	printf("Ankathete:\n");
	A = requestposnumber();
	
	printf("Gegenkathete:\n");
	B = requestposnumber();
	
	C= calculateHypothenuse(A,B);
	printf ("Das Ergebnis ist: %lf\n", C);
	showSplash();
	
	return 0;
}
