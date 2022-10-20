#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int z=n;
    for(int i=z-1;i>=0;i--)
    {
        if(v[i]!=0)
        {
            cout<<i<<endl;
            break;
        }
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