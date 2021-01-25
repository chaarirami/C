/*
  Helper functions for simple programm to 
  calculate the hypothenous.
  @author: Thomas Lehmann
  @date: 2018
*/

#include <stdio.h>
#include <math.h>

/* Show a simple splash screen. */
void showSplash(void){
	printf("Designed by Thomas Lehmann\n");
	printf("(c) 2018\n");
}

/* Request the user to input a positive
   number. Returns the number only if
   it is positive. Otherwise the request
   will be repeated.*/
/* not safe against wrong input! */
double requestPosNumber(void){
	double result = 0.0;
	
	do {
		printf("Positive Zahl eingeben:" );
		scanf("%lf", &result);
	} while(result < 0);
		
	return result;
}

/* Calculate the hypothenuse based on the 
   given cathets.
*/
double calculateHypothenuse(double a, double b){
	double result = 0.0;
	
	result = sqrt( a*a + b*b );
	
	return result;
}



