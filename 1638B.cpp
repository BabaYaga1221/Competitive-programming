#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<long>v(n);
    std::vector<int>check(n);
    std::vector<pair<long,int>>q;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
            check[i]=0;
        else
            check[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        q.push_back(make_pair(v[i],check[i]));
    }
    bool k=0;
    for(int j=0;j<n;j++)
    {
        bool p=0;
        for(int i=0;i<n-1;i++)
        {
            if(q[i].first>q[i+1].first)
            {
                if(q[i].second == q[i+1].second)
                {
                    cout<<"NO"<<endl;
                    p=1;
                    break;
                }
                else
                {
                    swap(q[i],q[i+1]);
                }
            }
        }
        if(p==1)
        {
            k=1;
            break;
        }
    }
    if(k==0)
        cout<<"YES"<<endl;
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