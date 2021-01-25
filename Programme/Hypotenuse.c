#include <stdio.h>
#include <math.h>

int main(void){
	double a=0.0;
	double b=0.0;
	double c=0.0;
	
	//Eingabe
	do { 
		int elements=0;
		do {
		printf("Länge der ersten Kathete:");
		elements = scanf("%lf", &a);
		} while  (0==elements);
	} while (0.0>a); 
	
	do {
		int elements=0;
		do{
		printf("Länge der zweiten Kathete:");
		elements = scanf("%lf", &b);
		} while (0==elements);
	} while (0.0>b); 
	
	
	//Berechnung
	c=sqrt(a*a+b*b); //c=sqrt(pow(a,2)+pow(b,2))
	
	
	//Ausgabe
	printf("Hypotenuse %lf\n", c);
	
	return 0;
}