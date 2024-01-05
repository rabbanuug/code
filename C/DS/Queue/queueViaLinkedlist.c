#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    Node *front, *rear;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* node = newNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = node;
        return;
    }
    queue->rear->next = node;
    queue->rear = node;
}

int dequeue(struct Queue* queue) {
    if (queue->front == NULL) return -1;
    struct Node* temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL) queue->rear = NULL;
    free(temp);
    return data;
}

int front(struct Queue* queue) {
    if (queue->front == NULL) return -1;
    return queue->front->data;
}

int main() {
    struct Queue* queue = createQueue();
    enqueue(queue, 1);
    enqueue(queue, 12);
    enqueue(queue, 14);
    printf("Front element : %d\n", front(queue));
    printf("Dequeue from queue : %d\n", dequeue(queue));
    printf("Dequeue from queue : %d\n", dequeue(queue));
    printf("Queue is %s\n", queue->front == NULL ? "empty." : "not empty.");
    return 0;
}