#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
using namespace std;

//std::vector<int>v;
// std::vector<pair<int,int>>v;
//std::vector<tuple<int,int,int>>v;
void solve()
{
    long n;
    std::vector<long>q;
    int x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.PB(x);
    }
    string s;
    cin>>s;
    sort(q.begin(),q.end());
    for(int i=0,j=0,z=n-1;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            cout<<q[j]<<" ";
            j++;
        }
        else
        {
            cout<<q[z]<<" ";
            z--;
        }
    }
    cout<<endl;
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