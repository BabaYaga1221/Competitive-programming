#include<stdio.h>
int main()
{
    int n,a,temp,c=0,t=0;
    scanf("%d",&a);
    while(a>0)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if((i%2)!=(arr[i]%2))
            {
                for(int j=0;j<n;j++)
                {
                    
                    if((i%2)==(arr[j]%2))
                    {
                        t++;
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        break;
                    }
                }
                if(t==1)
                {
                    c++;
                    t=0;
                }
            }
        }
        
    }
}