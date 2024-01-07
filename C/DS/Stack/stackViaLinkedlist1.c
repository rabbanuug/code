#include <stdio.h>
#include <stdlib.h>
/* fully written via me
push
pop
peek
empty
*/
typedef struct Node{
    int data;
    Node* next;
}Node;

Node* head = NULL;

//what we'll do in push?
// take an integer, make a node and connect to head
//when head null. newly created address 
void push(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = head;
    head = node;
}

//have to return last node data and clear the node
int pop(){
    Node* temp = head;
    int data = head->data;
    head = head->next;
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
    printf("%s\n", isEmpty()? "empty" : "not empty");
    push(1);
    printf("%s\n", isEmpty()? "empty" : "not empty");
    printf("peek : %d\n", peek());
    printf("popped : %d\n", pop());
    printf("%s\n", isEmpty()? "empty" : "not empty");

}