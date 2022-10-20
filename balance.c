#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&a);
    while(a>0)
    {
        int z=0,c=0,t=0;
        scanf("%d /n",&n);
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            arr[i]=arr[i]+pow(2,i+1);
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                c=c+arr[i];
            else
                t=t+arr[i];
        }
        if(c>0)
            z=c-t;
        else
            z=t-c;
        printf("%d",z);
        a--;
    }
    return 0;
}