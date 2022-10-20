#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    std::vector<int>v(n);
    std::vector<int>q(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        cin>>q[i];
    std::vector<pair<int,int>>v1;
    for(int i=0;i<n;i++)
    {
        v1.push_back(make_pair(v[i],q[i]));
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++)
    {
        if(v1[i].first<=k)
            k=k+v1[i].second;
        else
            break;
    }
    cout<<k<<endl;
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