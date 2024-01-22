#ifndef QUEUE_ARR
#define QUEUE_ARR

#include <stdio.h>

typedef struct queue
{
    unsigned int capacity;
    int rear, front, count;
    int *que;
}Queue;

typedef enum status{
    e_success,
    e_failure
}Status;

Status create_queue(Queue *q, int size);
Status enqueue(Queue *q, int data);
Status dequeue(Queue *q);
#endif