//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

long gcd (long a, long b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void solve()
{
    int n,ans=0;
    cin>>n;
    std::vector<long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans=ans+(__gcd(v[i],2*v[j])>1);
        }
    }
    cout<<ans<<endl;
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