#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
void main(){
    struct node *head,*newnode,*temp;
    head=0;
    int choice;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
      printf("do you to createmore node");
    scanf("%d",&choice);
    temp=head;
     while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    if (head ==0)
    {
      head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }    
}