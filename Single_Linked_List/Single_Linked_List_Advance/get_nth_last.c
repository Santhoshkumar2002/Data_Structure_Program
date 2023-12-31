#include <stdio.h>
#include "main.h"

Status get_nth_last(Data *head, int pos, int *data)
{
    if(head == NULL)
    {
        return e_list_empty;
    }

    if(pos < 1)
    {
        return e_failure;
    }

    Data *temp = head;
    while(temp != NULL && pos)
    {
        temp = temp -> link;
        pos--;
    }
    if(pos == 0)
    {
        while(temp != NULL)
        {
            temp = temp -> link;
            head = head -> link;
        }
        *data = head -> data;
        return e_success;
    }
    return e_failure;
}