//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long p,a,b,c;
    std::cin>>p>>a>>b>>c;
    long long a1,a2,a3;
    a1=(a-(p%a))%a;
    a2=(b-(p%b))%b;
    a3=(c-(p%c))%c;
    long long res = (a1<a2)?a1:a2;
    res=(res<a3)?res:a3;
    cout<<res<<endl;    
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