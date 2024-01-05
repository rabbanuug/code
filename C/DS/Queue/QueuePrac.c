#include <stdio.h>

//rear : last element position of the queue
//front : first element position of the queue

#define mx 100

typedef struct{
    int items[mx];
    int front, rear;
}Queue;

void initQueue(Queue *queue){
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(Queue *queue){
    return queue->front == -1;
}

void enqueue(Queue *queue, int value){
    if(queue->rear == mx-1){
        printf("Queue overflow\n");
        return;
    }
    if(isEmpty(queue)){
        queue->front = 0;
    }
    queue->items[++queue->rear] = value;
}

int dequeue(Queue *queue){
    if(isEmpty(queue)){
        puts("Queue underflow\n");
        return -1;
    }

    int frontValue = queue->items[queue->front];

    if(queue->front == queue->rear) queue->front = queue->rear = 0;
    else ++queue->front;

    return frontValue;
}

int front(Queue *queue){
    if(isEmpty(queue)) puts("Queue is empty.\n");
    else return queue->items[queue->front];
}

int main(){
    Queue queue;
    initQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 12);
    enqueue(&queue, 14);

    printf("Front element : %d\n", front(&queue));
    printf("Dequeue from queue : %d\n", dequeue(&queue));
    printf("Dequeue from queue : %d\n", dequeue(&queue));
    
    printf("Queue is %s\n", isEmpty(&queue) ? "empty." : "not empty.");

}