#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node
{int data;
struct node* next;
    /* data */
};
void deletelist(struct node** head_ref){
    struct node* curent = *head_ref;
    struct node* next;
    while (current != null)
    {next = current->next;
    free(current);
    current = next;
        /* code */
    }
    *head_ref = null;
}
void push(struct node** head_ref,int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node))
    new_node=>data = new_node;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    }
int main(){
    struct node* head = null;
    push(&head,1);
    push(&head,4);
     push(&head,1); 
    push(&head,12);
    push(&head,1);
printf("deleting linked list");
deletelist(&head);
printf("linked list deleted" );
}