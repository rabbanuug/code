//simply write the structure

#include <stdio.h>

#define mx 100

typedef struct{
    int items[mx];
    int top;
} Stack;

void initStack(Stack *stack){
    stack->top = -1;
}

int isEmpty(Stack *stack){
    return stack->top == -1;
}

void push(Stack *stack, int value){
    stack->items[++stack->top] = value;
}

int pop(Stack *stack){
    return stack->items[stack->top--];
}

int peek(Stack *stack){
    return stack->items[stack->top];
}

int main(){

    Stack stack;
    initStack(&stack);

    if(isEmpty) puts("Empty");
    else puts("Stack is not empty");

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 13);

    printf("%d\n", pop(&stack));

}