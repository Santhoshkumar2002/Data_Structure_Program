#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Function for delete entire list
Status delete_list(Data **head)
{
    if((*head) == NULL)
    {
        return e_list_empty;
    }

    Data *temp = (*head);
    while((*head) != NULL)
    {
        (*head) = (*head) -> link;
        free(temp);
        temp = (*head);
    }
    return e_success;
}