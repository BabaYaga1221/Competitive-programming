#include<stdio.h>
int main()
{
    int n,t=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            c=c+arr[i];
         }
         else
         {
             if(c>0)
             {
                 c=c-1;
             }
             else
             {
                 t=t+1;
             }
         }
    }
    printf("%d",t);

}