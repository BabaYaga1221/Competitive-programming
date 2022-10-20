#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int dr=1,dc=1;
    while(rb!=rd || cb!=cd)
    {
        if(rb==n)
            dr=-1;
        else if(cb==m)
            dc=-1;
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