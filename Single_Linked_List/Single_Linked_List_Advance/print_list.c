#include <stdio.h>
#include "main.h"

Status print_list(Data *head)
{
    if(head == NULL)
    {
        return e_list_empty;
    }

    while(head != NULL)
    {
        if(head -> link != NULL)
        {
            printf("%d -> ", head -> data);
        }
        else
        {
            printf("%d -> null\n", head -> data);
        }
        head = head -> link;
    }
    return e_success;
}