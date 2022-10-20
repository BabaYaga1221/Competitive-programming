#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=n-1;i>=0;i--)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}