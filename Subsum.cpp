//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,sum=0;
    scanf("%lld",&n);
    std::vector<long long>v(n);
    for(long long i=0;i<n;i++)
        scanf("%lld",&v[i]);
    std::sort_heap(v.begin(),v.end());
    for(long i=0;i<n;i++)
    {
        sum=sum+v[i];
        for(long j=i+1;j<n;j++)
        {
            
        }
    }
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