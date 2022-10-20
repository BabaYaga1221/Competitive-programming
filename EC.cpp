//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long x,y;
    cin>>x>>y;
    if((x%2!=0 || y%2!=0))
        cout<<"NO"<<endl;
    else if((x%2!=0 || y%2!=0) && (x==0 || y==0))
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
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