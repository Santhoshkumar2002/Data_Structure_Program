#include <stdio.h>
#include "main.h"

int main()
{
    Data *head = NULL;
    int choice, data, pos, ret;
    printf("Menu :\n");
    printf("1. Insert at First\n2. Middle Node\n3. Get nth Last\n4. Reverse List\n5. Print List\n6. Exit\n");
    while(1)
    {
        printf("Enter the Option to do : \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter data to insert element at first in list : ");
                scanf("%d", &data);
                if(insert_at_first(&head, data) == e_success)
                {
                    printf("-->Insert at first successfull\n");
                }
                else
                {
                    printf("-->Insert at first failure\n");
                }
                break;
            }
            case 2:
            {
                int mid;
                if(find_middle(head, &mid) == e_success)
                {
                    printf("-->Middle element is %d\n", mid);
                }
                else
                {
                    printf("-->List Empty\n");
                }
                break;
            }
            case 3:
            {
                printf("Enter the position to get data : ");
                scanf("%d", &pos);
                if((ret = get_nth_last(head, pos, &data)) == e_failure)
                {
                    printf("-->Position Not Found\n");
                }
                else if(ret == e_list_empty)
                {
                    printf("-->List Empty\n");
                }
                else
                {
                    printf("%dth position last data is %d\n", pos, data);
                }
                break;
            }
            case 4:
            {
                if(reverse_list_iter(&head) == e_success)
                {
                    printf("-->Reverse list successfull\n");
                }
                else
                {
                    printf("-->List empty\n");
                }
                break;
            }
            case 5:
            {
                if(print_list(head) == e_list_empty)
                {
                    printf("-->List Empty\n");
                }
                break;
            }
            case 6:
            {
                return 0;
            }
        }
    }
    return 0;
}