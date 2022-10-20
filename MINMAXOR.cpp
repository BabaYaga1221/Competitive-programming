//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    cout<<pow(2,n)<<endl;
    for(int i=0;i<2*n;i++)
        cout<<i<<" ";
    cout<<endl;
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