#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,x,y;
    cin>>n>>x>>y;
    int c=(n+1)/2;
    if((abs(x-c)+abs(y-c))%2==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;
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