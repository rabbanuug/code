// stack

/*
- [x] initialize the top -1
func
- [x] isEmpty true when top == -1
push if top < mx-1 else overflow
pop if !isEmpty
peek return current top
*/

#include <stdio.h>

#define MX 100

typedef struct{
    int items[MX];
    int top;
}Stack;

void initStack(Stack *stack){
    stack->top = -1;
}

int isEmpty(Stack *stack){// stack top -1 or not
    return stack->top == -1;
} 

void push(Stack *stack, int value){
    if(stack->top < MX-1) stack->items[++stack->top] = value;
    else printf("Stack overflow\n");
}

int pop(Stack *stack){
    if(!isEmpty(stack)) return stack->items[stack->top--];
    else printf("Stack Underflow\n");
}

int peek(Stack *stack){
    if(!isEmpty(stack)) return stack->items[stack->top];
    else printf("Stack is empty\n");
}


int main(){
    Stack stack;

    initStack(&stack);

    if(isEmpty(&stack)) printf("stack is empty\n");
    else puts("Not empty\n");

    push(&stack, 1);
    push(&stack, 15);
    push(&stack, 13);

    printf("Top element : %d\n", peek(&stack));
    printf("popping element : %d\n", pop(&stack));
    printf("popping element : %d\n", pop(&stack));
    printf("popping element : %d\n", pop(&stack));

    if(isEmpty(&stack)) printf("stack is empty\n");
    else puts("Not empty\n");

    
}