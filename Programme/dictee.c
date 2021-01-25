#include <stdio.h>

int main(void){
	double y=2.0;
	printf ("Quadrat der Zahl %lf ist %lf \n", y, y*y);
	int x=10;
	do {
		x=x-1;
		printf ("%d \n", x);
	}
	while (0 < x);
	return 0;
}