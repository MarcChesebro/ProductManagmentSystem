#include "pms.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	head->next->name = strdup(name);	
	head->next->unit = strdup(unit);
	head->next->quantity = quantity;
	head->next->next = NULL;
}

void deleteNode(struct node* head, char* name){
	while(head->next != NULL){
		if(strcmp(head->next->name, name)){

			free(head->next->unit);
			free(head->next->name);
			head->next = head->next->next;
			return;
		}
	}
	printf("product does not exist");
}

void deleteAll(struct node* head){
	if(head!=NULL){
                deleteAll(head->next);
		free(head->unit);
		free(head->name);
                free(head);
	}
}

//void search(struct node* head);

void printAll(struct node* head){

	if(head != NULL){
		printf("Name:\t%s\nUnit:\t%s\nQuantity:\t%d\n", head->name, head->unit, head->quantity);
		head = head->next;
		printAll(head);
	}
}

//void purchase(struct node* head);

//void sell(struct node* head);

//void save(struct node* head);
