//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int m,n;
    cin>>m>>n;
    if(m<n)
        cout<<0<<endl;
    else
        cout<<m/n<<endl;
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