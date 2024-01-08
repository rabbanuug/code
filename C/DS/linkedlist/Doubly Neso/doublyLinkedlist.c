#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next, *prev;
}Node;

Node* newNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = node->prev = NULL;
    return node;
}

Node* addToEmpty(int data){
    Node* node = newNode(data);
    return node;
}

void addAtBeg(Node** head, int data){
    Node* node = newNode(data);
    (*head)->prev = node;
    node->next= *head;
    *head = node;
}

void addAtEnd(Node* head, int data){// complexity n. have to be 1
    Node* node = newNode(data);
    Node* tp = head;
    // if(head->next == NULL) ;
    while(tp->next != NULL) tp = tp->next;
    node->prev = tp;
    tp->next = node;
    
}

void addAfterPos(Node** head,int pos, int data){
    Node* tp = *head;
    while(pos!= 1) tp = tp->next, pos--;
    Node* node = newNode(data);
    if(tp->next == NULL){
        tp->next = node;
        node->prev = tp;
        return;
    }
    node->prev = tp;
    node->next = tp->next;
    tp->next = node;
}

void addAtEnd1(Node** tail, int data){
    Node* node = newNode(data);
    (*tail)-> next = node;//link to prev node
    node->prev = *tail;//prev address
    *tail = node;
}

int main(){
    Node* head =  addToEmpty(2);
    Node* tail = head;

    // addAtEnd(head, 3);
    // addAtEnd(head, 33);
    // addAtEnd(head, 323);

    addAtEnd1(&tail, 1);
    addAtEnd1(&tail, 1);
    addAtEnd1(&tail, 1);
    addAtEnd1(&tail, 13);
    addAtBeg(&head, 5);
    addAfterPos(&head, 5, 4);

    Node* Current = head;
    while(Current != NULL){
        printf("%d ", Current->data);
        Current = Current->next;
    }
}