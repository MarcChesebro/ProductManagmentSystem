#ifndef pms
#define pms

struct node{

	int quantity;
	struct node* next;
};

void createList(struct node** head);

void insertNode(struct node* head);

void deleteNode(char* name);

void deleteAll(struct node* head);

void search(struct node* head);

void printAll(struct node* head);

void purchase(struct node* head);

void sell(struct node* head);

void save(struct node* head);

#endif
