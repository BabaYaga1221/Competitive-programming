#include<stdlib.h>

struct list{
    int data;
    struct list* next;
};
void insert(struct list **a)
{
    int d;
    struct list* temp,*r;
    printf("enter the element you want to enter\n");
    scanf("%d",&d);
    if(*a==NULL)
    {
        temp=(struct list*)malloc(sizeof(struct list));
        temp->data=d;
        temp->next=NULL;
        *a=temp;
    }
    else{
        temp=*a;
        while(temp->next=NULL)
            temp=(temp)->next;
        r=(struct list*)malloc(sizeof(struct list));
        r->data=d;
        r->next=NULL;
        temp->next=r;
    }
}
void travel(struct list *a)
{
    while(a!=NULL)
    {
        printf("%d ",(a)->data);
        a=(a)->next;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of elements do you want to enter.\n");
    scanf("%d",&n);
    struct list* a;
    while(n--)
    {
        insert(&a);
    }
    printf("the created linked list is - \n");
    travel(&a);
    return 0;
}