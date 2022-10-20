#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++)
        sum+=v[i];
    cout<<sum<<endl;
}
int main()
{
    solve();
    return 0;
}