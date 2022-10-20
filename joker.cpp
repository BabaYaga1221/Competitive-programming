//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int p=n/k;
    if(m==0 || n==m)
        cout<<0<<endl;
    else
    {
        if(p>=m)
            cout<<m<<endl;
        else if(p==1 && m!=1)
            cout<<0<<endl;
        else if(m%p==0)
            cout<<1<<endl;
        else
            cout<<p-(m-p)<<endl;
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