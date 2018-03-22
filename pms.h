#ifndef pms
#define pms

struct node{

	char* name;
	char* unit;
	int quantity;
	struct node* next;
};

void createList(struct node** head);

void insertNode(struct node* head, char* name, char* unit, int quantity);

void deleteNode(struct node* head, char* name);

void deleteAll(struct node* head);

void search(struct node* head, char* name);

void printAll(struct node* head);

void purchase(struct node* head);

void sell(struct node* head);

void save(struct node* head);

#endif
