/* Aufgabenblatt 5
@authors: Tobias Röbke, Rami Chaari
@date: 2018-05-02/Editiert am 2018-05-04
*/
#include <stdio.h>
#include <math.h>
#include <CalculateTestNumberII.c>
//Globale Variablen 
double x=0.0; 
double y=0.0; 
double result = 0.0;
//Funktionen
double readIn1(void);
double readIn2(void);
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

