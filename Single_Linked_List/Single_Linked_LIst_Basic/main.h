//struct definition
typedef struct data
{
    int data;
    struct data *link;
}Data;

//enum
typedef enum status
{
    e_success = 0,
    e_failure = -1,
    e_list_empty = -2
}Status;

//Function prototype
Status insert_at_first(Data **head, int data);
Status insert_at_last(Data **head, int data);
Status delete_first(Data **head);
Status delete_last(Data **head);
Status delete_list(Data **head);
Status find_node(Data *head, int data);
Status print_list(Data *head);