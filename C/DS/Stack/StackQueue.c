//stack and queue 
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
//-----------stack-----------
struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initializeStack(struct Stack *s) {
    s->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

void push(struct Stack *stack, int value) {
    if (stack->top < MAX_SIZE - 1) {
        stack->items[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
    }
}

int pop(struct Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

int peek(struct Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top];
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}


//---------Queue-------
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isQueueEmpty(struct Queue *queue) {
    return queue->front == -1;
}

void enqueue(struct Queue *queue, int value) {
    if (queue->rear == MAX_SIZE - 1) {
//first, we are checking rear is already at the end or not
        printf("Queue overflow\n");
        return;
    }

    if (isQueueEmpty(queue)) {
        queue->front = 0;
    }

    queue->items[++queue->rear] = value;
}

int dequeue(struct Queue *queue) {
    // function will return an integer and front position will be set to the next item. it's optional, i'll receive or print the value from deque or not 
    if (isQueueEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }

    int frontValue = queue->items[queue->front];

    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front++;
    }

    return frontValue;
}

int front(struct Queue *queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue->items[queue->front];
}

int main() {
    // Stack example
    struct Stack stack;
    initializeStack(&stack);

    // Pushing elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Peeking at the top of the stack
    printf("Top element of stack: %d\n", peek(&stack));

    // Popping elements from the stack
    printf("Popped from stack: %d\n", pop(&stack));
    printf("Popped from stack: %d\n", pop(&stack));

    // Checking if the stack is empty
    if (isEmpty(&stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Queue example
    struct Queue queue;
    initializeQueue(&queue);

    // Enqueuing elements into the queue
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    enqueue(&queue, 60);

    // Front element of the queue
    printf("Front element of queue: %d\n", front(&queue));

    // Dequeuing elements from the queue
    printf("Dequeued from queue: %d\n", dequeue(&queue));
    printf("Dequeued from queue: %d\n", dequeue(&queue));

    // Checking if the queue is empty
    if (isQueueEmpty(&queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }

    return 0;
}