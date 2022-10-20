#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
using namespace std;

//std::vector<int>v;
//std::vector<pair<int,int>>v;
//std::vector<tuple<int,int,int>>v;

bool check(std::vector<string>v)
{
    for(int i=0;i<v.size();i++)
    {
        char start=v[i][0],end=v[i][v[i].length()-1];
        if(start==end)
        {
            for(int j=0;j<v[i].length()-1;j++)
            {
                if(v[i][j]!=v[i][j+1])
                    return false;
            }
        }
    }
    return true;
}
void solve()
{
    int n;
    stack<string>tower;
    string s;
    cin>>n;
    std::vector<string>v;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    // sort(v.begin(),v.end());
    // for(int i=0;i<n;i++)
    //     cout<<v[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     int c=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(v[i][0]!=v[j][v[j].length()-1])
    //             c++;
    //     }
    //     if(c==n || c==n-1)
    //         tower.push(v[i]);
    // }
    // for(int i=0;i<tower.size();i++)
    // {
    //     cout<<tower.top()<<" ";
    //     tower.pop();
    // }
    if(check(v)==false)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        
    }

}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}