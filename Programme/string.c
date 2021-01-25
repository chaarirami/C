#include <stdio.h>

int main(void){
	char name [] = "Rami";
	char buchstabe =' ';
	int i=0;
	for (i=0; i<5; i++) {
		buchstabe = name [i];
		printf ("%c\n",buchstabe);
	}
	return 0;
}