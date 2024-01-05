#include <stdio.h>
#include <stdlib.h>

//here "struct Node" is return type. like return type int
struct Node *createLinkedList(int arr[], int size);

struct Node{
	int data;
	struct Node *next;
};


int main(){
	
	int a[] = {1,2,3,4,5,6};
	struct Node *head;
	head = createLinkedList(a, 6);

	while(head != NULL){
		printf("%d -> ", head-> data);
		head = head -> next;
	}
    // printf("NULL\n");
	return 0;
}

struct Node *createLinkedList(int arr[], int size){
	//here *head, *temp, *current all are Node type variable
	struct Node *head = NULL, *temp = NULL, *current = NULL;
	for(int i = 0; i<size; i++){
		temp = (struct Node*)malloc(sizeof(struct Node));
		temp -> data = arr[i];

		temp -> next = head; 
        head = temp;


	}
	return head;
}