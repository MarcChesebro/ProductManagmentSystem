#ifndef pms
#define pms

struct node{

	char* name;
	char* unit;
	int quantity;
	int price;
	struct node* next;
};

void createList(struct node** head);

void insertNode(struct node* head, char* name, char* unit, int quantity, int price);

void deleteNode(struct node* head, char* name);

void deleteAll(struct node* head);

void search(struct node* head, char* name);

void printAll(struct node* head);

void purchase(struct node* head, char* name);

void sell(struct node* head, char* name);

void save(struct node* head);

#endif
