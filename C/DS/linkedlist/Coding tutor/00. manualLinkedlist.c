#include <stdio.h>
#include <stdlib.h>

struct Node{
		int data;
struct Node *next;
};


int main(){
	//clear
	struct Node *a;// = NULL;
	struct Node *b;// = NULL;
	struct Node *c;// = NULL;
//clear 
	a = (struct Node*)malloc(sizeof(struct Node));
	b = (struct Node*)malloc(sizeof(struct Node));
	c = (struct Node*)malloc(sizeof(struct Node));

	(*a).data = 10; //this part clear
	b -> data = 20;
	c -> data = 30;

	a -> next = b; //clear
	b -> next = c;
	c -> next = NULL;

    // Traverse the linked list
    while(a != NULL){ //clear
    	printf("%d -> ", a -> data);
    	a = a->next;
    }
	// printf("%p", a);
    return 0;
}