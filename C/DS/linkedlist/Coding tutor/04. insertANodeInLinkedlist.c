// import sys
// sys.stdout = open('Python/output.txt', 'w')
// sys.stdin = open('Python/input.txt', 'r')

/*
Insert at beginning
insert at end
insert at nth position
insert after a node
insert before a node
delete a node from a linkedlist
*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *createLinkedList(int arr[], int size);
void insertAtBeginning(struct Node *head, int data);
void insertAtEnd(struct Node *head, int data);
void insertAtNthPosition(struct Node *head, int data, int position);
void deleteNode(struct Node *head, int data);
void printList(struct Node *head);


int main(){
	
	int a[] = {1,2,3,4,5,6};
	struct Node *head = NULL;

	head = createLinkedList(a, 6);

	insertAtBeginning(head, 10);
	insertAtEnd(head, 20);
	//insert at 0th position is same as insert at beginning. 0th position inserting not working 
	//inserting from 1 to last is working
    insertAtNthPosition(head, 30, 3);
	deleteNode(head, 6);
	deleteNode(head, 100);
	return 0;
}


void printList(struct Node *head){
	struct Node *current = head;
	while(current != NULL){
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("Null\n");
}

void insertAtBeginning(struct Node *head, int data){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;	
	temp->next = head;
	head = temp;
	printList(head);
}

void insertAtEnd(struct Node *head, int data){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	struct Node *current = head;
	//traverse to the end of the list
	while(current->next != NULL){
		current = current->next;
	}
	//now current is pointing to the last node
	current->next = temp;
	printList(head);
}

void insertAtNthPosition(struct Node *head, int data, int position){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	struct Node *current = head;
	//traverse to the nth position and insert the node
	for(int i = 0; i<position-1; i++){
		current = current->next;
	}
	temp->next = current->next;
	current->next = temp;
	printList(head);

}

void deleteNode(struct Node *head, int data){
	//delete node if found in the list else nothing to do
	struct Node *current = head;
	struct Node *prev = NULL;
	while(current != NULL){
		if(current->data == data){
			//if the node to be deleted is the first node
			if(prev == NULL){
				head = current->next;
				free(current);
				printList(head);
				return;
			}
			// Update the next pointer of the previous node to skip the current node and point to the next node.
			prev->next = current->next;
			free(current);
			printList(head);
			return;
		}
		// Set the previous node to the current node.
		prev = current;
		current = current->next;
	}
}

struct Node *createLinkedList(int arr[], int size){
	struct Node *head = NULL, *temp = NULL, *current = NULL;
	for(int i = 0; i<size; i++ ){
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
