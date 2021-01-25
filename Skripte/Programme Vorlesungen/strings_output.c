#include <stdio.h>

int main(void){
	char name[] = "Thomas";
	char single = ' ';	

	// Output controlled by zero-termination
	// with while-loop
	int i = 0;
	while(name[i]!=0){
		printf("%c\n", name[i]);
		i++;
	}
	// with for-loop
	for(int j = 0; name[j]!=0; j++){
		printf("%c\n", name[j]);
	}
	// Output controlled by fixed size
	// ASCII-code and character
	for( int index = 0; index < 6; index++){
		single = name[index];
		printf("%3d, %c\n", single, single);
	}
	
	// output with printf
	printf(name);
	printf("\n");
	
	printf("Text:%s\n", name);
	
	// manipulation of zero-termination
	name[3] = 0;
	printf("Text:%s\n", name);

	return 0;
}