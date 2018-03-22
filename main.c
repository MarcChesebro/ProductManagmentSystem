#include "pms.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
	struct node* head;
	int input;

	while(0 == 0){
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
		scanf("%d", &input);
		if(input == 1){
			 createList(&head);
		}else if(input == 2){
			char name[50];
			char unit[50];
			int quantity;
			int price;

			printf("Name:");
			scanf("%s", name);
	
			printf("Quantity:");
			scanf(" %d", &quantity);

			printf("Price:");
			scanf(" %d", &price);

			printf("Unit:");
			scanf("%s", unit);
		
			insertNode(head, name, unit, quantity, price);
		}else if(input == 3){
			char* name;
			printf("\nName:");
			scanf("%s", name);
			deleteNode(head, name);
		}else if(input == 4){
			deleteAll(head);
		}else if(input == 5){
			char name[50];
			printf("Name for search:");
			scanf("%s", name);
			search(head, name);
		}else if(input == 6){
			printAll(head->next);		
		}else if(input == 7){
			char name[50];
			printf("name");
			scanf("%s", name);
			purchase(head, name);
		}else if(input == 8){
			char name[50];
			printf("name");
			scanf("%s", name);
			sell(head, name);
		}else if(input == 9){
			save(head);
		}else if(input == 0){
			exit(0);
		}		
	}

	free(head);
}
