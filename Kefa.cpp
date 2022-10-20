//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,c=0;
    cin>>n;
    std::vector<ll>v(n);
    std::vector<ll>p(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    if(n==1)
        cout<<1<<endl;
    else{
    for(ll i=0;i<n-1;i++)
    {
        if(i==n-2)
        {
            if(v[i]<=v[i+1])
            {
                c++;
                p.push_back(c+1);
            }
            else
            {
                p.push_back(c+1);
            }
        }
        else if(v[i]<=v[i+1])
        {
            c++;
        }
        else
        {
            p.push_back(c+1);
            c=0;
        }
    }
    cout<<*std::max_element(p.begin(),p.end())<<endl;
    }
}
int main()
{
    solve();
    return 0;
}