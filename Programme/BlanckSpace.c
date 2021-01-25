#include <stdio.h>
#include <string.h>

void RemoveBlankSpace (char* string);
int main(void){
	printf("Schreiben Sie einen beliebigen Satz:\n");
	char string =" ";
	scanf("%c",&string);
	RemoveBlankSpace (&string);
	printf ("Der Satz ohne Leerzeichen ist:\n%c\n",string);
	return 0;
}

void RemoveBlankSpace (char* string){
	int i =0; //counter
	int lengthString =0;
	lengthString =strlen(string);  
	while (i< lengthString){
		if (string[i] == " ") string.erase(i,1);	
		i++;
}
void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}
