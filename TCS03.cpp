#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,p;
    cin>>n;
    std::vector<pair<int,int>>v;
    std::vector<list<int>>q;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,0));
    }
    cin>>p;
    std::vector<pair<int,int>>q;
    for(int i=0;i<p;i++)
    {   
        int a,b;
        cin>>a>>b;
        q.push_back(make_pair(a,b));
    }
    for(int i=0;i<p;i++)
    {
        int a=q[i].first;
        int b=q[i].second;
        if(v[a-1].second==0 || v[b-1].second==0)
        {
            int temp =v[a-1].first;
            v[a-1].first+=v[b-1].first;
            v[b-1].first+=v[a-1].first;
            v[a-1].second=1;
            v[b-1].second=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    // cout<<v[n-1].first<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i].first<<" ";
    // }
    // cout<<endl;

}
int main()
{
    solve();
    return 0;
}