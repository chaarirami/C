#include <stdio.h>
#include "helper.h"
#include "calculateggt.h"

int main(void){
	showSplash();

	unsigned int x = 0;
	unsigned int y = 0; 	
	x = (unsigned int)requestPosNumber();
	y = (unsigned int)requestPosNumber();
	
	int result = 0;
	result = calculateGGT( x, y);
	
	printf("Ergebnis: %d\n", result);
		
	return 0;
}