#include <stdio.h>
#include <stdlib.h>
typedef struct student {
	int matrikel;
	struct student *next;
} student_t;

int main(void){
	struct student *begin = NULL;
	
	//first student
	begin = malloc(sizeof(student_t));
	begin->matrkel = 123452; //(*begin).matrikel
	begin->next = NULL;
	
	//new student
	struct student *new = NULL;
	new = malloc(sizeof(student_t));
	new->matrikel = 356785; //(*begin).matrikel
	new->next = NULL;
	
	//next new student
	begin->next = new;
	new = malloc(sizeof(student_t));
	new->matrikel = 568654; //(*begin).matrikel
	new->next = NULL;
	
	//append new student
	struct student *actual = begin;
	while (NULL != actual -> next) {coc
		actual = actual -> next;
	}
		
	//delete list
	actual = begin;
	struct student *toDelete = NULL;
		while (NULL != actual -> next) {
			toDelete = actual;
			actual = actual -> next;
			free(toDelete);
		}
		begin = NULL;
	
	return 0;
}

