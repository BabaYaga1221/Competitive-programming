#include<stdio.h>

int main()
{
    int k,r,i;
    scanf("%d %d",&k,&r);
    int s=1;
    while(s>0)
    {
        if((k*s)%10==0 || (k*s)%10==r)
        {
            printf("%d",s);
            break;
        }
        else 
            s++;
    }
         return 0;
            
}