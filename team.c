#include<stdio.h>
int main()
{
    int a,c=0,t=0;
    scanf("%d",&a);
    int arr[a][3];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
                c++;
        }
        if(c>=2)
            t++;
        c=0;
    }
    printf("%d",t);
}