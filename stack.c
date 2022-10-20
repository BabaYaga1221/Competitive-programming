#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size ;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr-> top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr-> top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow! cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow! cannot push to the stack\n");
        return -1;
    }
    else
    {
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void tranverse(struct stack *ptr)
{
    int i;
    printf("the stack element");
    for(i=ptr->top; i>0; --i)
    {
        printf("%d\n",ptr-> arr[ptr->top]);
        ptr->top--;
    }
}
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    int s;
    printf("enter the size of stack\n");
    scanf("%d\n",&s);
    sp->size=s;
    sp->top=-1;
    sp->arr= (int *) malloc (s * sizeof(int));
    printf("stack has been create successfulyy\n");
    printf("before pushing , full : %d\n",isFull(sp));
    printf("before pop , full : %d\n",isEmpty(sp));
    int z=1;
    int z2;
    int inp;
    while(z!=2)
    {
        printf("if you dont enter the element press 2\n");
        scanf("  %d\n  ",&z2);
        if(z2==2){
            printf("%d",z2);
            z=2;
        }
        else{
            printf("%d",z2);
        sp->top++;
        printf("Input element\n");
        scanf("%d\n",&inp);
        push(sp,inp);
        }
    }
tranverse(sp);
pop(sp);
printf("completed program\n ");
printf("empty %d\n",isEmpty(sp));
}