#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=0;
        if(n==k)
        {
            for(int i=n-1,j=0;i>=k/2;i--,j++)
            {
                if(k>2*i)
                    continue;
                else
                {
                    a[j]=i;
                    c++;
                }
            }
            cout<<c<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                    continue;
                else
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=n,j=0;i>=k/2;i--,j++)
            {
                if(k==i || k>2*i)
                    continue;
                else
                {
                    a[j]=i;
                    c++;
                }
            }
            cout<<c<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                    continue;
                else
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}