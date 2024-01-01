#include <stdio.h>
#include "main.h"

Status reverse_list_iter(Data **head)
{
    if((*head) == NULL)
    {
        return e_list_empty;
    }

    Data *prev = NULL;
    Data *curr = *head;
    Data *next = *head;

    while(curr != NULL)
    {
        next = curr -> link;
        curr -> link = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
    return e_success;
}