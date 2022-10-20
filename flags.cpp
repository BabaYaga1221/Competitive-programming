//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x,y;
    cin>>x>>y;
    if(abs(x-y)%2==0)
        cout<<abs(x-y)/2<<endl;
    else
        cout<<(abs(x-y)/2)+2<<endl;
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