#include <stdio.h>
#include <text.h>
#include <string.h>
#include <ctype.h>
void Analyse (char str[]);

int main(void){
	Analyse (TEXT1);
	printf("Für Text 2:\n");
	Analyse (TEXT2);
	printf("Für Text 3:\n");
	Analyse (TEXT3);
	return 0;
}

void Analyse (char str[]){
	int length = strlen(str);
	for (char letter='a'; letter<='z'; letter++){
		int counter=0;
		for (int PosInStr=0; length>PosInStr; PosInStr++){
			if (toupper(letter) == toupper(str[PosInStr])) (counter++);
	}
			printf ("%c : %i / %i\n", letter, counter, length);
	}
}