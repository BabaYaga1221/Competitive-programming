//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
long t;
cin>>t;
while(t--)
{
    long n;
    cin>>n;
    long a[n];
    long v[n];
    for(long i=0;i<n;i++)
        cin>>a[i],v[i]=0;
    long p=n-1;
    for(long i=n-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            v[p]=0;
            p--;
        }
        else if(a[i]==1)
        {
            v[p]=1;
            p--;
        }
        else
        {
            for(long j=a[i];j>=1;j--)
            {
                if(p>=0)
                {
                    v[p]=1;
                    p--;
                }
                else
                    break;
            }
            i=i-a[i]+1;
        }
    }
    for(long i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}