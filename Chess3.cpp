//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,sum=0;
    cin>>n;
    std::vector<int>v(n);
    std::vector<int>q(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        cin>>q[i];
    for(int i=0;i<n;i++)
    {
        if((v[i]=='0' && q[i]=='1') || (v[i]=='1' && q[i]=='0'))
            sum=sum+2;
        else if(v[i]==q[i] && v[i]=='0')
            sum=sum+1;
        else 
            continue;
    }
    cout<<sum<<"\n";
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