#include <stdio.h>
#include "helper.h"

int main(void){
	printf(" Berechnung nach Pythagoras\n");
	showSplash();
		
	double a = 0.0;
	double b = 0.0;
	double result = 0.0;
	
	printf("Ankathete:\n");
	a = requestPosNumber();
	
	printf("Gegenkathete:\n");
	b = requestPosNumber();
	
	result = calculateHypothenuse(a, b);
	
	printf("Ergebnis ist:%lf\n", result);

	return 0;
}

