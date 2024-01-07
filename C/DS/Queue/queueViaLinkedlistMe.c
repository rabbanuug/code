#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
}Node;

Node *front = NULL, *rear = NULL;

int isEmpty(){
    return front == NULL;
}

Node* newNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void enqueue(int value){
    Node* node = newNode(value);
    
    if(isEmpty()){
        front = rear = node;
        return;
    }
    else{
        rear->next = node;
        rear = node;
    } 
}

int dequeue(){
    Node* temp = front;
    int data = temp->data;
    front = front->next;
    free(temp);
    return data;
}

int frontt(){
    return front->data;
}

int main(){
    printf("%s\n", isEmpty()? "empty" : "not empty");
    enqueue(1);
    enqueue(12);
    enqueue(13);
    enqueue(132);
    printf("deq : %d\n", dequeue());
    printf("%s\n", isEmpty()? "empty" : "not empty");
    printf("front : %d\n", frontt());
    printf("deq : %d\n", dequeue());
    printf("deq : %d\n", dequeue());
    printf("deq : %d\n", dequeue());
    printf("%s\n", isEmpty()? "empty" : "not empty");

}