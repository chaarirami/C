#include <stdio.h>

double MinMax(double array[7]);

int main(void){
	double array[7] = {26.26, 25.00, 26.38, 31.42,28.87,27.01,25.18};
	double Min=array[0];
	double Max=array[0];
	double result[2]={0.0};
	
	result = MinMax(array[7]); 
/*	for (int i=1; 7>i; i++){
		if (array[i] < Min) (Min=array[i]);
		if (array[i] > Max) (Max=array[i]);
	}
*/	printf ("Minimaltemperatur ist %2.2lf und Maximaltemperatur ist %2.2lf\n", Min, Max);
		
	return 0;
}

double MinMax (double array[7]){
		double Min=array[0];
		double Max=array[0];	
		for (int i=1; 7>i; i++){
		if (array[i] < Min) (Min=array[i]);
		if (array[i] > Max) (Max=array[i]);
		double result[2] = {Min,Max};
	}
}