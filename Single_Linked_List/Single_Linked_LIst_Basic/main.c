#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    Data *head = NULL;
    int option, data;
    printf("Menu : \n");
    printf("1. Insert at First\n2. Insert at Last\n3. Delete First\n4. Delete Last\n5. Delete List\n6. Find Node\n7. Print List\n8. Exit\n");
    while (1)
    {        
        printf("Enter the option: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
            {
                printf("Enter the data to insert at first : ");
                scanf("%d", &data);
                if(insert_at_first(&head, data) == e_success)
                {
                    printf("-->Insert at first successfull\n");
                }
                else{
                    printf("-->Insert at first failure\n");
                }
                break;
            }
            case 2:
            {
                printf("Enter the data to insert at last : ");
                scanf("%d", &data);
                if(insert_at_last(&head, data) == e_success)
                {
                    printf("-->Insert at last successfull\n");
                }
                else
                {
                    printf("-->Insert at last failure\n");
                }
                break;
            }
            case 3:
            {
                if(delete_first(&head) == e_success)
                {
                    printf("-->Delete element at first successfull\n");
                }
                else
                {
                    printf("-->ist empty nothing to delete\n");
                }
                break;
            }
            case 4:
            {
                if(delete_last(&head) == e_success)
                {
                    printf("-->Delete element at last successfull\n");
                }
                else
                {
                    printf("-->ist empty nothing to delete\n");
                }
                break;
            }
            case 5:
            {
                if(delete_list(&head) == e_success)
                {
                    printf("-->Delete list successfull\n");
                }
                else
                {
                    printf("-->List Empty\n");
                }
                break;
            }
            case 6:
            {
                printf("Enter the data to find : ");
                scanf("%d", &data);
                int ret;
                if((ret = find_node(head, data)) == e_failure)
                {
                    printf("-->Data Not found in the list\n");
                }
                else if(ret == e_list_empty)
                {
                    printf("-->List Empty\n");
                }
                else
                {
                    printf("%d is found at %d node\n", data, ret);
                }
                break;
            }
            case 7:
            {
                if(print_list(head) == e_list_empty)
                {
                    printf("-->List is Empty\n");
                }
                break;
            }
            case 8:
            {
                return 0;
            }
            default :
                printf("Enter correct option\n");
            
        }
    }
}