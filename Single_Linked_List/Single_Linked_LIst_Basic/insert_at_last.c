#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Function for insert element at last in list
Status insert_at_last(Data **head, int data)
{
    //create new node
    Data *new = malloc(sizeof(Data));
    if(new == NULL)
    {
        return e_failure;
    }

    //assign value to new node
    new -> data = data;
    new -> link = NULL;

    //check if head is null
    if((*head) == NULL)
    {
        (*head) = new;
        return e_success;
    }

    //using temp variable traverse to last node and add data
    Data *temp = (*head);
    while(temp -> link != NULL)
    {
        temp = temp -> link;
    }
    temp -> link = new;
    return e_success;
}