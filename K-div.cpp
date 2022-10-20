//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(n==k || k==1)
        cout<<1<<endl;
    else if(n==1)
        cout<<k<<endl;
    else if((max(n,k)%min(n,k))==0)
        cout<<(max(n,k)/min(n,k))<<endl;
    else
        cout<<(max(n,k)/min(n,k))+(max(n,k)%min(n,k))<<endl;
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