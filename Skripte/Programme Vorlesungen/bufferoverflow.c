#include <stdio.h>
#define BUFFER_SIZE 100

int main(void){
	char buffer[BUFFER_SIZE];
	char name[] = "Thomas";
	
	char single = ' ';
	single = name[1];
	
	//char abort = 0; // false
	char yourname[] = "Who";
	
	yourname[0] = 'A';
	printf("%s\n", yourname);
	yourname[1] = 'B';
	printf("%s\n", yourname);
	yourname[2] = 'C';
	printf("%s\n", yourname);
	yourname[3] = 'D';
	printf("%s\n", yourname);
	yourname[4] = 'E';
	printf("%s\n", yourname);
	yourname[5] = 'F';
	printf("%s\n", yourname);
	yourname[6] = 'G';
	printf("%s\n", yourname);
	yourname[7] = 'H';
	printf("%s\n", yourname);
	
	return 0;
}