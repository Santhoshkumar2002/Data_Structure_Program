#include <stdio.h>
#include "main.h"

Status print_list(Data *head)
{
    //check head is empty
    if (head == NULL)
    {
        return e_list_empty;
    }

    //traverse one by one node and print elements
    while (head)
    {
        if (head->link != NULL)
        {
            printf("%d -> ", head->data);
        }
        else
            printf("%d -> null\n", head->data);
        head = head->link;
    }
    e_success;
}