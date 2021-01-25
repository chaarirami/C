/* Aufgabenblatt 3
@authors: Tobias Röbke, Rami Chaari
@date: 2018-05-02
*/
#include <stdio.h>
#include <math.h>
//Globale Variablen
double x=0.0; 
double y=0.0; 
double result = 0.0;
//Funktionen
double readIn1(void);
double readIn2(void);
void testnumber(void);
int CalculateTestnumber(int, int);
void menu(void);
void add(void);
void substract(void);
void multiply(void);
void divide (void);

int main(void){
	
	char c = 'f';
	do{ 
		menu();
		scanf("%c\n", &c);
		
		if(c == 'a') add();
		else if(c == 'b') substract();
		else if(c=='c') multiply();
		else if(c=='d') divide();
		else if(c=='t') testnumber();
		else if(c != 'e'){
			printf("Falsche Eingabe! Versuchen sie es erneut mit a-e\n");
		}
		
	}while(c !='e');
	printf("Programmende");
	return 0;
}

double readIn1(void){
	
	printf("Ersten Wert eingeben: ");
	double value1 = 0.0;
	scanf("%lf\n", &value1);
	
	return value1;
}
double readIn2(void){
	
	printf("Zweiten Wert eingeben: ");
	double value2 = 0.0;
	scanf("%lf\n", &value2);
	
	return value2;
}
void menu(void){
	printf("a) Addition\n");
		printf("b) Subtraktion\n");
		printf("c) Multiplikation\n");
		printf("d) divison\n");
		printf("t) Prüfziffer bestimmen\n");
		printf("e) Programmende\n");
		printf("Ihre Wahl: ");
}

void add(void){
		x = readIn1();
		y = readIn2();
		result = x + y;
		printf("Ergebnis %lf + %lf = %lf\n", x, y, result);
}

void substract(void){
		x = readIn1();
		y = readIn2();
		result = x - y;
		printf("Ergebnis %lf - %lf = %lf\n", x, y, result);
}

void multiply(void){
		x = readIn1();
		y = readIn2();
		result = x * y;
		printf("Ergebnis %lf * %lf = %lf\n", x, y, result);
}

void divide(void){
		x = readIn1();
		do{
			y = readIn2();
			if(y==0){
			printf("Geben sie bitte keine 0 ein\n");
			}
		}while(y == 0.0);
		result = x / y;
		printf("Ergebnis %lf / %lf = %lf\n", x, y, result);
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