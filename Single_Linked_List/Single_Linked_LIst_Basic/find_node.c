#include <stdio.h>
#include "main.h"

Status find_node(Data *head, int data)
{
    if(head == NULL)
    {
        return e_list_empty;
    }

    int count =0;
    while(head != NULL)
    {
        count++;
        if(head -> data == data)
        {
            return count;
        }
        head = head -> link;      
    }
    return e_failure;
}