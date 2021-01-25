#include <stdio.h>

void showSplash(void);

int main(void){
	
	showSplash();
	
	printf ("cooles Programm!\n");
	
	showSplash();
	
	return 0;
}

void showSplash(void){
	printf("Designed by Thomas Lehmann\n");
	printf (" (c) 2018\n");
}