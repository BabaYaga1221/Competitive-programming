#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
   int n,k,c=0,p=0;
   cin >>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    while(true)
    {
        if(p==0){
        for(int i=1;i<n;i++)
        {
            if(a[i]<=k)
            {
                a[i]=a[i]+a[0];
                if(a[i]<=k)
                    c++;
            }
            else
            {
                p=1;
                break;
            }
        }
        }else
            break;
    }
    cout<<c<<endl;
}
    return 0;
}