#include <stdio.h>
#include "main.h"

int main()
{
    Data *head = NULL;
    int choice, data;
    printf("Menu :\n");
    printf("1. Insert at First\n2. Middle Node\n3. Get nth last\n4. Exit\n");
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
                break;
            }
            case 4:
            {
                return 0;
            }
        }
    }
    return 0;
}