#include<stdio.h>
int stak[100]
int choice,n,top,x,i;
int push(int);
int pop(int);
int display(int);
int main{
    top = -1;
    printf("enter the size of the stack\n");
    scanf("%d",&n);
    printf("stack operation using stack\n")
    printf("enter 1 for push,2 for pop, 3 for\n ")
    do
    {
        printf("enter the choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case /* constant-expression */1:
            /* code */push();
            break;
        case /* constant-expression */2:
            /* code */pop();
            break;
            case /* constant-expression */3:
                /* code */display();
                break;
        default:
            break;
        }
    } while (/* condition */choice ! = 4);
    return 0;   
}
int push(int){
    printf("enter the data");
    scanf("%d",&x);
    if (top = n-1)
    {
        /* code */printf("stack overfloe");
    }
     else
     top++;
     stack[top]=x;
}
int pop(int){
    int item;
    if (top == -1)
    {
        /* code */printf("stack underflow\n");
    }
    else
    item = stack[top];
    top--;
    printf("%d",item);
}
int display(int){
    int i;
    for (i = top; i > = top; i++)
    {
        /* code */printf("%d",stack[i]);
    }   
}