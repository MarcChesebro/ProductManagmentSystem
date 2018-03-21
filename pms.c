#include "pms.h"
#include <stdlib.h>

void createList(struct node** head){
	*head = (struct node*)malloc(sizeof(struct node));
	(*head)->quantity = 1;
	(*head)->next = NULL;
}

//void insertNode(struct node* head);

void deleteNode(struct node* head, char* name){
	while( != NULL){
		if(head->name == " name"){
			free(head->name
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

//void printAll(struct node* head);

//void purchase(struct node* head);

//void sell(struct node* head);

//void save(struct node* head);
