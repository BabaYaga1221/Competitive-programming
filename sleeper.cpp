//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
//code copied!
void solve()
{
    long long l,r;
    cin>>l>>r;
    if(r<l*2)
        cout<<r-l<<endl;
    else
        cout<<(r-1)/2<<endl;
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