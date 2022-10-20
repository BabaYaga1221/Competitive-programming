#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long int n,k;
    cin>>n>>k;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    
    }
    while(k--)
    {
        int p=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>=p)
                p=a[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i]=p-a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
    return 0;
}