/* Aufgabenblatt 5
@authors: Tobias Röbke, Rami Chaari
@date: 2018-05-02/Editiert am 2018-05-04
*/
#include <stdio.h>
int CalculateTestnumber(int a , int b);
void testnumber(void);
int main(void){
	testnumber();
	return 0;
}

	void testnumber(void){
	int a =0;	//5 Stellige Zahl
	int b =0;	//Teilungsfaktor
	
	do {
		printf("Geben Sie eine fünfstellige Zahl ein:\n");
		scanf("%d\n",&a);
		if ((a>99999)||(a<10000)) {
			printf("Falsche Eingabe!\n");
		} 
	}while ((a>99999)||(a<10000));
	
	do {	
		printf("Geben Sie einen Teilungsfaktor ein:\n");
		scanf("%d\n",&b);
		if ((b<2)||(b>9)) {
			printf("Falsche Eingabe!\n");
		}	
	} while ((b<2)||(b>9));
	
	int testnumber = 0;	
	testnumber = CalculateTestnumber(a,b);
	a= a * 10 + testnumber;
	printf("Prüfziffer: %d\n", testnumber);
	printf("sechstellige Zahl: %d\n", a);
}

int CalculateTestnumber(int a , int b){
	
	int rest = 0.0;
	int number = 0.0;
	int i = -1.0;
	do {
		i++;
		number = (a*10)+i;
		rest = number%b;
		
	}while(0 != rest);
	return i;
}
	
	