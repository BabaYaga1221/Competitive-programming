#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=NULL;
    int a;
    printf("How much elements you want to enter?\n");
    scanf("%d",&a);
    while(a--)
    {
        int num;
        scanf("%d",&num);
        list(&head,num);
    }
    display(head);
}
void list(struct node **head, int num)
{
    struct node *temp,*r;
    if(*head==NULL)
    {
        temp=malloc(sizeof(struct node));
        temp->data=num;
        temp->link=NULL;
        *head=temp;
    }
    else
    {
        temp=*head;
        while(temp->link!=NULL)
            temp=temp->link;
        r=malloc(sizeof(struct node));
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
}
void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->link;
    }
}