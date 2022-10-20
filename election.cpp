//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<max(0ll,(1+max(b,c)-a))<<" "<<max(0ll,1+max(a,c)-b)<<" "<<max(0ll,1+max(a,b)-c)<<endl;   
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