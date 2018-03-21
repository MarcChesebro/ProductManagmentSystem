#include "pms.h"
#include <stdlib.h>

int main(int argc, char** argv){
	struct node* head;
	createList(&head);
	free(head);
}
