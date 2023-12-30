#include <stdio.h>
#include <stdlib.h>
#include "main.h"

Status insert_at_first(Data **head, int data)
{
    Data *new = malloc(sizeof(Data));
    if(new == NULL)
    {
        return e_failure;
    }

    new -> data = data;
    new -> link  = *head;
    *head = new;
    return e_success;
}