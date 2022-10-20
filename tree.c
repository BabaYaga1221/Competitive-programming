#include<stdio.h>
#include<stdlib.h>

struct Tree{
  struct Tree *left;
  int data;
  struct Tree *right;
};

void BST(struct Tree **a,int num)
{
  
  if(*a==NULL)
  {
    a=malloc(sizeof(struct Tree));
    (*a)->left=NULL;
    (*a)->data=num;
    (*a)->right=NULL;
    return ;
  }
  else
  {
    if((*a)->data<num)
      BST((*a)->right,num);
    else
      BST((*a)->left,num);
  }
}

void in(struct Tree **q)
{
  while(*q!=NULL)
  {
    in((*q)->left);
    printf("%d ",(*q)->data);
    in((*q)->right);
  }
}

int main()
{
  struct Tree *a=NULL;
  int z;
  printf("Enter the number of elements do you want to insert\n");
  scanf("%d",&z);
  while(z--)
  {
    int num;
    scanf("%d",&num);
    BST(&a,num);
  }
  in(&a);
  return 0;
}
