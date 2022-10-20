//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long x;
    int n,m;
    cin>>x>>n>>m;
    while(true)
    {
        if(n>0 && m*10<x)
        {
            x=x/2;
            x=x+10;
            n--;
        }
        else if(m>0)
        {
            x=x-10;
            m--;
        }
        else 
            break;
    }
    if(x>0)
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