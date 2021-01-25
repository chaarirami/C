#include <stdio.h>
#include <math.h>

void showSplash(void);
double requestPosNumber(void);
double calculateHypothenuse(double a, double b);

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

double calculateHypothenuse(double a, double b){
    return sqrt(a*a + b*b);
}

void showSplash(void){
	printf(" Designed by Thomas Lehmann\n");		
	printf(" (c)2018\n");
}

double requestPosNumber(void){
	double result = 0.0;

	do {
    	printf("Positive Zahl eingeben:" );
	    scanf("%lf", &result);
	} while (result < 0);
	
	return result;
}

/* never used ... */
void showHalloWorld(void){
	printf("Hello World\n");
}
