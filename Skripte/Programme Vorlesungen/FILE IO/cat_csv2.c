/*
 Example for reading a CSV-file with 
 two columns of numbers. Program stops
 on read error.
 @author: Thomas Lehmann
 @date: 2018-05-15
*/
#include <stdio.h>

int main(void){
	FILE *input = NULL;
	
	input = fopen("data.csv", "r");
	
	if( NULL != input ){
		double value1 = 0.0;
		double value2 = 0.0;
		int elements = 0;
		do {
			elements = fscanf(input, "%lf;%lf\n", &value1, &value2);
			if( 1 < elements ){
				printf("%f %f\n", value1, value2);
			}
		} while( !feof(input) && 1<elements );			

		fclose(input);
	}
	 
	return 0;
}