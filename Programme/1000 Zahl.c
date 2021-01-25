#include <stdio.h>

int main(void){
	int x=0;
	
	//do {
		printf ("Geben Sie eine Zahl ein:\n");
		scanf ("%d", &x);
		
	//} while (x<2);
	int y=0;
	int result=x;
	if (x>1) {
	while (result <= 1000) {
		result= result *x ;
		y=y+1;
	}  
	printf ("Die Zahl muss %d mal mit sich selbst multiplieziert werden um 1000 zu überschreiten.",y);
} else {
		printf ("Sorry, mit X<= 1 geht das nicht!");
	}	
	return 0;
}