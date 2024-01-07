#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   int data;
   struct Node* next;
} Node;

//code generated via Bard

Node* head = NULL;  // Global head pointer

Node* newNode(int data){
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   node->next = NULL;
   return node;
}

void push(int data){
   Node* node = newNode(data);
   node->next = head;
   head = node;
}

int pop(){
   Node* temp = head;
   int data = head->data;
   head = head->next;
//    head = temp->next;//just check the code via modified. working or not
   
   free(temp);
   return data;
}

int peek(){
   return head->data;
}

int isEmpty(){
   return head == NULL;
}

int main(){

   push(1);
   push(15);
   push(13);

   printf("Top element: %d\n", peek());
   printf("Popping element: %d\n", pop());
   printf("Popping element: %d\n", pop());
   printf("Popping element: %d\n", pop());
   printf("Stack is %s\n", isEmpty() ? "empty.\n" : "not empty.\n");

   return 0;
}