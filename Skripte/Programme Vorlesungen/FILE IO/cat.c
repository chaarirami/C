/*
 Example for reading a file byte-by-byte.
 In this case, it reads its own code.
 @author: Thomas Lehmann
 @date: 2018-05-15
*/
#include <stdio.h>
#define BUFFERSIZE = 1000;
int main(void){
	FILE *input = NULL;
	FILE *output = NULL;
	
	input = fopen("cat.c", "r");
	char buffer[BUFFERSIZE]=" ";
	if( NULL != input ){
		output =fopen("kopie.c", "w");
		if (NULL!= output){
		char character = ' ';
		int elements = 0;
		while( !feof(input) ){
			result = fgets(buffer, BUFFERSIZE, input);
			if(NULL !=result){
			fprintf(output, "%s", buffer);
				}

		}
		fclose(input);
	}
	 
	return 0;
}