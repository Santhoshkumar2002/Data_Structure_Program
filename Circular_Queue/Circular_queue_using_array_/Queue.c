#include <stdio.h>
#include <stdlib.h>
#include "main.h"

Status create_queue(Queue *q, int size)
{
    q -> que = malloc(size* sizeof(int));
    if(q -> que == NULL)
    {
        return e_failure;
    }

    q -> rear = -1;
    q -> front = -1;
    q -> count = 0;
    q -> capacity = size;
    return e_success;
}

Status enqueue(Queue *q, int data)
{
    if(q -> front == -1)
    {
        q -> front++;
    }
    
    if(q -> count == q -> capacity)
    {
        return e_failure;
    }
    q -> rear = (q -> rear + 1) % q -> capacity;
    q -> que[q -> rear] = data;
    q -> count++;
    return e_success;

}

Status dequeue(Queue *q)
{
    if(q -> count == 0)
    {
        return e_failure;
    }

    q -> front = (q -> front + 1) % q -> capacity;
    q -> count--;
    return e_success;
}

Status print_queue(Queue q)
{
    if(q.count == 0)
    {
        return e_failure;
    }
    printf("front -> ");
    while(q.count != 0)
    {
        printf("%d ", q.que[q.front]);
        q.front = (q.front+1)%q.capacity;
        q.count--;
    }
    printf("<- rear\n");
    return e_success;
}