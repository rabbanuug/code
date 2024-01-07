#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
}Node;

typedef struct Stack {
    Node* top;
} Stack;

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}
int peek(Stack* stack) {
    return stack->top->data;
}

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
    // Assigning the top of the stack to a temporary variable
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
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