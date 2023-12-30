#include <stdio.h>
#include "main.h"

Status find_middle(Data *head, int *mid)
{
    if(head == NULL)
    {
        return e_list_empty;
    }

    Data *slow = head;
    Data *fast = head;
    while(fast != NULL && fast -> link != NULL)
    {
        slow = slow -> link;
        fast = fast -> link -> link;
    }
    *mid = slow -> data;
    return e_success;
}