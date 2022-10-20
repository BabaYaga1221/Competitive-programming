//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,sum=0;
    cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    long m;
    cin>>m;
    std::vector<long long>q(m);
    for(long i=0;i<m;i++)
        cin>>q[i];
    sort(v.begin(),v.end());
    for(long i=0;i<m;i++)
    {
        sum=0;
        for(long j=0;j<n;j++)
        {
            if(v[n-q[i]]==v[j])
                continue;
            else
                sum=sum+v[j];
        }
        cout<<sum<<endl;
    }
}
int main()
{
    solve();
    return 0;
}