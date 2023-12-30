#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Function to delete last element in list
Status delete_last(Data **head)
{
    //check if head is empty
    if((*head) == NULL)
    {
        return e_list_empty;
    }

    //check if head contain only one node 
    if((*head) -> link == NULL)
    {
        free(*head);
        (*head) = NULL;
        return e_success;
    }

    //using temp variable delete last element
    Data *temp = (*head);
    while(temp -> link -> link != NULL)
    {
        temp = temp -> link;
    }
    free(temp -> link);
    temp -> link = NULL;
    return e_success;
}