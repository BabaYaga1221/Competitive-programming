//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,n,S;
    cin>>a>>b>>n>>S;
    if((a*n)>S)
    {
        a=a-(a-(S/n));
        if((a*n)+b>=S)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else if((a*n)+b>=S)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
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