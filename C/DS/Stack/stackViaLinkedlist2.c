#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   int data;
   struct Node* next;
} Node;

//code generated via Bard

Node* head = NULL;  // Global head pointer

Node* newNode(int data) {
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   node->next = NULL;
   return node;
}

void push(int data) {
   Node* node = newNode(data);
   node->next = head;
   head = node;
}

int pop() {
//    if (head == NULL) {
//        printf("Stack Underflow\n");
//        return -1;
//    }
   Node* temp = head;
   int data = temp->data;
   head = head->next;
   free(temp);
   return data;
}

int peek() {
   if (head == NULL) {
       printf("Stack is empty\n");
       return -1;
   }
   return head->data;
}

int isEmpty() {
   return head == NULL;
}

int main() {
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
