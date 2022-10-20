#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(i*i<=n && (i*i*i)<=n)
            c=c+2;
        else if(i*i<=n)
            c++;
        else if((i*i*i)<=n)
            c++;
    }
    cout<<c<<endl;
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
