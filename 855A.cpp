#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<pair<string,int>>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(make_pair(s,1));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].first==v[j].first)
            {
                v[j].second++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].second>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}