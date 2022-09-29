#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*p,*t,*newnode;
void create()
{
    int x,n,i;
    printf("Enter the n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value\n");
        scanf("%d",&x);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            p=newnode;
        }
        else
        {
            for(p=head;p->next!=NULL;p=p->next);
            p->next=newnode;
            p=newnode;
        }
    }
}
void display()
{
    if(head==NULL)
    printf("Linked list is Empty\n");
    else
    {
        for(p=head;p!=NULL;p=p->next)
        {
            printf("%d->",p->data);
        }
    }
    
}
int main()
{
    int choice;
   
    do
    {
        printf("\nMain menu\n");
        printf("\n 1.Create \n 2.Display\n 3.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            create();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Enter valid Input");
            break;
        } 
    }while(choice>0 && choice<4);
return 0;
}