#include <stdio.h>
#define BUFFER_SIZE 30

int main(void){
	char name[] = "ThOmAs";
	char single = '@';
	char buffer[BUFFER_SIZE];
	buffer[0] = '\0';     // in case of use

	int i = 0;
	while(name[i]!=0){
		if( name[i] > 64 && name[i] < 91){
			buffer[i] = name[i]+(char)32;
		} else {
			buffer[i] = name[i];
		}
		i++;
	}
	buffer[i] = name[i];   // copy zero-termination	

	printf( buffer );

	// Alternative implementation
	char surname[] = "Lehmann";
	i = -1;   // will be incremented to zero on first run...
	do{
		i++;
		if( surname[i] >= 'A' && surname[i] <= 'Z'){
			buffer[i] = surname[i]+(char)32;
		} else {
			buffer[i] = surname[i];
		}
	} while(surname[i]!=0);
	
	printf( buffer );

	return 0;
}