//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,k=5;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<1<<" "<<3<<endl;
    else
    {
        cout<<1<<" "<<3<<" ";
        for(int i=3;i<=n;i++)
        {
            cout<<k<<" ";
            k=k+2;
        }
        cout<<endl;
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}