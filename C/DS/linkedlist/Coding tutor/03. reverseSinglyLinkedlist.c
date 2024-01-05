#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *createLinkedList(int arr[], int size);
void reverseLinkedList(struct Node *head);




int main(){
	
	int a[] = {1,2,3,4,5,6};
	struct Node *head = NULL;

	head = createLinkedList(a, 6);
    struct Node *newHead = head;

	while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("Null\n");
    //Reverse a Linkedlist
    reverseLinkedList(newHead);
	return 0;
}

void reverseLinkedList(struct Node *head){
    struct Node *prev = NULL, *current = head, *next = NULL;
    while(current != NULL){
        //Store the next node
        next = current->next;
        //reverse the link/connection
        current->next = prev;
        //propagate
        prev = current;
        current = next;
    }
    head = prev;
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("Null\n");
}

struct Node *createLinkedList(int arr[], int size){
	struct Node *head = NULL, *temp = NULL, *current = NULL;
	for(int i = 0; i<size; i++){
		temp = (struct Node*)malloc(sizeof(struct Node));
		temp -> data = arr[i];
		temp -> next = NULL;
		if(head == NULL){
			head = temp;
			current = temp;
		}else{
			current-> next = temp;
			current = current -> next;
		}
	}
	return head;
}
