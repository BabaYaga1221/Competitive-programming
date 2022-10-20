#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d\n",&t);
    while(t>0)
    {
        scanf("%d\n",&n);
        int c=0,a=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
             {
                 if(arr[i]>arr[j])
                 {
                     int tmp=arr[i];
                     arr[i]=arr[j];
                     arr[j]=tmp;
                 }
             }
         }
        for(int i=0;i<n;i++)
        {
            if(c>=a)
                a=a+arr[i];
            else
                c=c+arr[i];
        }
        if(a==c)
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }
    return 0;
}