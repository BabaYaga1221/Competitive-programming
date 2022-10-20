#include<stdio.h>
int main()
{
    int n;
    int c=0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n>=5)
        {
            c++;
            n=n-5;
        }
        else if(n>=4)
        {
            c++;
            n=n-4;
        }
        else if(n>=3)
        {
            c++;
            n=n-3;
        }
        else if(n>=2)
        {
            c++;
            n=n-2;
        }
        else 
        {
            c++;
            n=n-1;
        }
        
    }
    printf("%d",c);
    return 0;
}