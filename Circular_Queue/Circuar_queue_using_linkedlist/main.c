#include <stdio.h>
#include "main.h"
int main()
{
    Queue *head = NULL;
    int option;
    while(1)
    {
        printf("----------------------\n");
        printf("Menu :\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\n");
        printf("Enter the option : ");
        scanf("%d", &option);
        printf("----------------------\n");

        switch (option)
        {
            case 1:
            {
                int data;
                printf("Enter the data : ");
                scanf("%d", &data);
                if(enqueue(&head, data) == e_false)
                {
                    printf("INFO : Enqueue failure\n");
                }
                else{
                    printf("INFO : Enqueue success\n");
                }
                break;
            }
            case 2:
            {
                if(dequeue(&head) == e_false)
                {
                    printf("INFO : Queue is empty\n");
                }
                else
                {
                    printf("INFO : Dequeue success\n");
                }
                break;
            }
            case 3:
            {
                if(print_queue(head) == e_false)
                {
                    printf("INFO : Queue is empty\n");
                }
                break;
            }
            case 4:
            {
                return 1;
            }
            default :
            {
                printf("INFO : Invalid option\n");
                printf("NOTE : Enter the corret Option\n");
            }
        }
    }
    
}