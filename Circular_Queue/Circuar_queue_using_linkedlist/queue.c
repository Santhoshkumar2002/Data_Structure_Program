#include <stdio.h>
#include <stdlib.h>
#include "main.h"

Status enqueue(Queue **head, int data)
{
    Queue *new = malloc(sizeof(Queue));
    if(new == NULL)
    {
        return e_false;
    }
    new -> data = data;
    new -> link = NULL;
    if(*head == NULL)
    {
        *head = new;
        return e_true;
    }

    Queue *temp = *head;
    while(temp -> link != NULL)
    {
        temp = temp -> link;
    }
    temp -> link = new;
    return e_true;
}

Status dequeue(Queue **head)
{
    if(*head == NULL)
    {
        return e_false;
    }
    Queue *temp = *head;
    *head = temp -> link;
    free(temp);
    return e_true;
}

Status print_queue(Queue *head)
{
    if(head == NULL)
    {
        return e_false;
    }
    while(head)
    {
        printf("%d ", head -> data);
        head = head -> link;
    }
    printf("\n");
    return e_true;
}