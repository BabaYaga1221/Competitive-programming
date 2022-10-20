#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<(10*i)+1<<" ";
    cout<<endl;
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