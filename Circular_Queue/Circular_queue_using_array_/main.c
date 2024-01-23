#include <stdio.h>
#include "main.h"
int main()
{
    Queue q;
    int size, choice;
    printf("Enter the queue size : ");
    scanf("%d", &size);

    if(create_queue(&q, size) == e_failure)
    {
        printf("INFO -> Queue not created\n");
        return 1;
    }

    while(1)
    {
        printf("\n--------------------------\n");
        printf("Menu :\n1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);
        printf("--------------------------\n");
        switch(choice)
        {
            case 1:
            {
                int data;
                printf("Enter the data : ");
                scanf("%d", &data);
                if(enqueue(&q, data) == e_failure)
                {
                    printf("INFO -> Queue Full\n");
                }
                else
                {
                    printf("INFO -> Queue Success\n");
                }
                break;
            }
            case 2:
            {
                if(dequeue(&q) == e_failure)
                {
                    printf("INFO -> Queue is empty\n");
                }
                else
                {
                    printf("INFO -> Dequeue Success\n");
                }
                break;
            }
            case 3:
            {
                if(print_queue(q) == e_failure)
                {
                    printf("INFO -> Queue is empty\n");
                }
                break;
            }
            case 4:
            {
                return 0;
            }
            default:
            {
                printf("INFO -> Invalid choice\n");
            }
        }
        
    }
}