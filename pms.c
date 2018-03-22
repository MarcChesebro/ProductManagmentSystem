#include "pms.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void createList(struct node** head){
	*head = (struct node*)malloc(sizeof(struct node));
	(*head)->name = (char*)malloc(sizeof(char));
	(*head)->name = "";
	(*head)->unit = NULL;
	(*head)->quantity = 1;
	(*head)->price = 0;
	(*head)->next = NULL;
}

void insertNode(struct node* head, char* name, char* unit, int quantity, int price){

	while(head->next != NULL){
		if(strcmp(head->name, name) == 0){
			printf("Already in List");
			return;
		}
		head = head->next;
	}

	if(strcmp(head->name, name) == 0){
		printf("Already in List");
		return;
	}
	
	head->next = (struct node*)malloc(sizeof(struct node));
	head->next->name = strdup(name);
	head->next->unit = strdup(unit);
	head->next->quantity = quantity;
	head->next->price = price;
	head->next->next = NULL;
}

void deleteNode(struct node* head, char* name){
	while(head->next != NULL){
		if(strcmp(head->next->name, name) == 0){

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
		head->next = NULL;
                free(head);
	}
}

void search(struct node* head, char* name){

	while(head != NULL){
		if(strcmp(head->name, name) == 0){
			printf("Found");
			return;
		}
		head = head->next;
	}	
	printf("Not Found");
}

void printAll(struct node* head){

	if(head != NULL){
		printf("Name:\t%s\nUnit:\t%s\nQuantity:\t%d\nPrice:\t%d\n\n", head->name, head->unit, head->quantity, head->price);
		head = head->next;
		printAll(head);
	}
}

void purchase(struct node* head, char* name){
	while(head != NULL){
		if(strcmp(head->name, name) == 0){
			head->quantity++;
			return;
		}
		head = head->next;
	}	
	printf("Product Not Found");

}

void sell(struct node* head, char* name){

	struct node* original = head;

	while(head != NULL){
		if(strcmp(head->name, name) == 0){
			head->quantity--;
			if(head->quantity < 1){
				deleteNode(original, name);
			}
			return;
		}
		head = head->next;
	}
	printf("Product Not Found");
}

void save(struct node* head){

	FILE* file;

	file = fopen("save.txt", "w+");

	while(head != NULL){
		fprintf(file, "%s, %s, %d, %d", head->name, head->unit, head->price, head->quantity);
		head = head->next;
	}

	fclose(file);
}
