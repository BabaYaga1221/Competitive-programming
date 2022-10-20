//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,m=0,c=0;
    cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    m=v[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(v[i]-v[i+1]<=m)
            c++;
        else
            break;
    }
    cout<<c+1<<endl;
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