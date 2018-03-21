#include "pms.h"
#include <stdlib.h>
#include <stdio.h>

void createList(struct node** head){
	*head = (struct node*)malloc(sizeof(struct node));
	(*head)->name = NULL;
	(*head)->unit = NULL;
	(*head)->quantity = 1;
	(*head)->next = NULL;
}

void insertNode(struct node* head, char* name, char* unit, int quantity){

	while(head->next != NULL){
		head = head->next;
	}	
	head->next = (struct node*)malloc(sizeof(struct node));
	head->next->name = name;
	head->next->unit = unit;
	head->next->quantity = quantity;
}

//void deleteNode(char* name);

//void deleteAll(struct node* head);

//void search(struct node* head);

//void printAll(struct node* head);

//void purchase(struct node* head);

//void sell(struct node* head);

//void save(struct node* head);
