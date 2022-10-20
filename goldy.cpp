//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long n,x,sum=0;
    cin>>n>>x;
    std::vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(n==1)
    {
        if(a[0]!=x)
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<endl;
        }   
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(sum!=x)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(x==a[i])
                {
                    swap(a[i],a[i+1]);
                }
                cout<<a[i]<<" ";
                x-=a[i];
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
    return 0;
}