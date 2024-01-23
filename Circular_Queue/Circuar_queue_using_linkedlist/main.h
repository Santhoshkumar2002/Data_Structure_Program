#ifndef QUEUE_LIST
#define QUEUE_LIST

typedef struct Queue
{
    int data;
    struct Queue *link;
}Queue;

typedef enum status
{
    e_true,
    e_false
}Status;

Status enqueue(Queue **head, int data);
Status dequeue(Queue **head);
Status print_queue(Queue *head);
#endif