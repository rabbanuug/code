#include <stdio.h>
#include <stdlib.h>

//written via gpt

//createStack() - creates a new stack
//push() - adds a new element to the stack
//pop() - removes and returns the top element of the stack
//peek() - returns the top element of the stack without removing it
//isEmpty() - returns 1 if the stack is empty, else 0
//isFull() - returns 1 if the stack is full, else 0
//deleteStack() - deletes the entire stack

typedef struct Node{
    int data;
    Node* next;
}Node;

typedef struct Stack {
    Node* top;
} Stack;

Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void push(Stack* stack, int data) {
    Node* node = newNode(data);
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack* stack) {
    // if (stack->top == NULL) {
    //     printf("Stack Underflow\n");
    //     return -1;
    // }
    // Assigning the top of the stack to a temporary variable
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

int peek(Stack* stack) {
    // if (stack->top == NULL) {
    //     printf("Stack is empty\n");
    //     return -1;
    // }
    return stack->top->data;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

int main() {
    Stack *stack = createStack();
    push(stack, 1);
    push(stack, 15);
    push(stack, 13);
    printf("Top element : %d\n", peek(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Stack is %s\n", isEmpty(stack) ? "empty.\n" : "not empty.\n");
    
    printf("Size of Node %d\n", sizeof(Node*));
    printf("Size of Node %d\n", sizeof(Node));
    printf("Size of Stack %d", sizeof(Stack));
    
    free(stack);

    return 0;
}