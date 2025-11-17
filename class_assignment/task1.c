#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SLNode{
    int number;
    struct SLNode* next;
} SLNode;

typedef struct Queue{
    SLNode *front;
    SLNode *rear;
    size_t len;
} Queue;

void initQueue(Queue){
    
}

void enqueue(Queue* queue, int number) {

}

void dequeue(Queue* queue){

}

void freeQueue(Queue* queue){

}


int main(){
    Queue queue;
    initQueue(&queue);
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    printf("Dequeue: %d\n", dequeue(&queue));
    freequeue(&queue);

    return 0;
}