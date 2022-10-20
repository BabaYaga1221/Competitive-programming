//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    if((n+1)*y<x)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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