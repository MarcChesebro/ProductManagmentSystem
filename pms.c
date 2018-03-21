#include "pms.h"
#include <stdlib.h>

void createList(struct node** head){
	*head = (struct node*)malloc(sizeof(struct node));
	(*head)->quantity = 1;
	(*head)->next = NULL;
}

//void insertNode(struct node* head);

//void deleteNode(char* name);

//void deleteAll(struct node* head);

//void search(struct node* head);

//void printAll(struct node* head);

//void purchase(struct node* head);

//void sell(struct node* head);

//void save(struct node* head);
