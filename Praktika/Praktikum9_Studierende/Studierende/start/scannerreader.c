/* 
Assignment 9
Start code for problem.

Add and change code at appropriete places!

@authors: Thomas Lehmann
@date: 2018-05-24
@cooperation: -
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *input = NULL;
	input = fopen("ls_single_line_short.txt","r");
	double angle_min = 0.0;
	double angle_inc = 0.0;
	int success=0;
	int lines=0;
	int *space_number;
	int *space_angle;
	int *space_distance;
	int *space_intensity;
	int *space_x;
	int *space_y;

	if(NULL != input){
		if(!feof(input)){
			success=1;
			int elements=2;
			do{			
			elements = fscanf(input, "%lf.%lf\n", &angle_min, &angle_inc);
			lines++;
			}	while (1>elements);
		}
		fclose(input);
	}

	*space_number=malloc(lines*sizeof(int));
	space_angle=malloc(lines * sizeof(double));
	space_distance=malloc(lines * sizeof(double));
	space_intensity=malloc(lines * sizeof(double));
	space_x=malloc(lines * sizeof(double));
	space_y=malloc(lines * sizeof(double));
	
	if(success){
		FILE *output = NULL;
		output = fopen("ls_data.csv","w");
		if( NULL!=output ){

			int number[&space_number];
			double angle[lines]; 
			double distance[lines];
			double intensity[lines];
			double x[lines]; //X-Koordinate
			double y[lines]; //Y-Koordinate
		
			}
	}	

	free(space_number);
	free(space_angle);
	free(space_distance);
	free(space_intensity);
	free(space_x);
	free(space_y);
	
	return 0;
}