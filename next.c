#include<stdio.h>
int main()
{
    int a,n,c=0;
    scanf("%d,%d",&a,&n);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++)
    {
        if(arr[j]<=n)
            c+=0;
        else  
            c++;
    }
    printf("%d",c);
    return 0;
}