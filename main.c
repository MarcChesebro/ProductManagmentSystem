#include "pms.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
	struct node* head;
	int input;

	while(True){
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Welcome to our store!\n");
		printf("1. Create an empty list ");
		printf("2. Insert a product\n");
		printf("3. Delete a product 	");
		printf("4. Delete the list\n");
		printf("5. Search a prouct 	");
		printf("6. Display the list\n");
		printf("7. Purchase a product 	");
		printf("8. Sell a product\n");
		printf("9. Save to file		");
		printf("0. Exit\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		scanf("input option: %d", &input);
		if(input == 1){
			 createList(&head);
		}else if(input == 2){
			char* name;
			char* unit;
			int quantity;
			scanf("Name: %s", name);
			scanf("Unit: %s", unit);
			scanf("Quantity: %d", &quantity);
			insertNode(head, name, unit, quantity);
		}else if(input == 3){
			char* name;
			scanf("Name: %s", name);
			deleteNode(head, name);
		}else if(input == 4){
			deleteAll(head);
		}
	}

	free(head);
}
