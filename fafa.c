#include<stdio.h>
int main()
{
    int a,c,t=0;
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++)
    {
        c=a-i;
        if(c%i==0)
        {
            t++;
        }
    }
    printf("%d",t);
    return 0;

}