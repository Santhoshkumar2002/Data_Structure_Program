#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Function for insert element at first in list
Status insert_at_first(Data **head, int data)
{
    //create new node
    Data *new = malloc(sizeof(Data));
    if(new == NULL)
    {
        return e_failure;
    }

    //Assign value to new node
    new -> data = data;
    new -> link = (*head);
    (*head) = new; //assign new to (*head)
    return e_success;
}