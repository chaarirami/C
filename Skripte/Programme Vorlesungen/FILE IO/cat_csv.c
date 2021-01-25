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
		int elements = 2;     // initialised non-zero for first loop
		while( !feof(input) && 1<elements ){			
			elements = fscanf(input, "%lf;%lf\n", &value1, &value2);
			if( 1 < elements ){
				printf("%f %f\n", value1, value2);
			}
		}
		fclose(input);
	}
	 
	return 0;
}