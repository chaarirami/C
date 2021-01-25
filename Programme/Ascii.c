#include <stdio.h>
#define START 65
#define END 96
int main(void){
	int i=START;
	while (END>i) { printf ("%3d : %c\n",i, i); //while
		i=i+1; //i++
	} 
	printf ("-------\n");
	for (int y=START; END>y; y++) {
		printf ("%3d : %c\n", y,y); //for
	}
	return 0;
}