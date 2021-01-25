#include <stdio.h>

int main(void){
	/* Aufgabenblatt 1
@author: Rami Chaari
@date: 2018-03-30
*/
	
	printf("Geben Sie die Koordinaten für Position 1 und die entsprechende Temperatur ein:");
	int x=0; int y=0; float c=0;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%f", &c);
	
	printf("Geben Sie die Koordinaten für Position 2 und die entsprechende Temperatur ein:");
	int xx=0; int yy=0; float cc=0;
	scanf("%d", &xx);
	scanf("%d", &yy);
	scanf("%f", &cc);
	
	printf(" Position X    | Position Y     |  Temperature [°C] ");
	printf("\n+++++++++++++++|++++++++++++++++|+++++++++++++++++++");
	printf("\n%+15d|",x); printf("%+16d|",y); printf("%+19.3f", c);
	printf("\n%+15d|",xx); printf("%+16d|",yy); printf("%+19.3f", cc);
	
	return 0;
}