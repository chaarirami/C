/*Auslagern in eine Swap-Funktion*/
#include <stdio.h>
int diff(int u, int v);

int main(void){
	int x = 3;
	int y = 4;
	int result = 0;
	
	if(x < y){
		int temp = x;
		x = y;
		y = temp;
	}
	
	result = diff(x, y);
	
	return 0;
}

int diff(int u, int v){
	int diff = 0;
	diff = u - v;
	return diff;
}

	
