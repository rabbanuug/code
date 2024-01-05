#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, int data) {
    Node* node = newNode(data);
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

int peek(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

int main() {
    Stack* stack = createStack();
    push(stack, 1);
    push(stack, 15);
    push(stack, 13);
    printf("Top element : %d\n", peek(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Popping element : %d\n", pop(stack));
    printf("Stack is %s\n", isEmpty(stack) ? "empty." : "not empty.");
    return 0;
}