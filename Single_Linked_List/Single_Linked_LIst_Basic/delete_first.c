#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Function for delete element at first
Status delete_first(Data **head)
{
    //check head is null
    if((*head) == NULL)
    {
        return e_list_empty;
    }

    //check if head contain one node only
    if((*head) -> link == NULL)
    {
        free(*head);
        (*head) = NULL;
        return e_success;
    }

    //using temp variable delete first element
    Data *temp = (*head);
    (*head) = (*head) -> link;
    free(temp);
    return e_success;
}