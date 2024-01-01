typedef struct data
{
    int data;
    struct data *link;
}Data;

typedef enum return_list
{
    e_success,
    e_failure,
    e_list_empty
}Status;

Status insert_at_first(Data **head, int data);
Status find_middle(Data *head, int *mid);
Status get_nth_last(Data *head, int pos, int *data);
Status reverse_list_iter(Data **head);
Status print_list(Data *head);