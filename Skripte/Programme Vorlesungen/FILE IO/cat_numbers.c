/*
 Example for reading a list of numbers.
 No read-error handling.

 @author: Thomas Lehmann
 @date: 2018-05-15
*/
#include <stdio.h>

int main(void){
	FILE *input = NULL;
	
	input = fopen("data.txt", "r");
	
	if( NULL != input ){
		double value = 0.0;
		int elements = 0;
		while( !feof(input) ){
			elements = fscanf(input, "%lf\n", &value);
			printf("%f\n", value);
		} 

		fclose(input);
	}
	 
	return 0;
}