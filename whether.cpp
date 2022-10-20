//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a[7]={0},S=0,R=0;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            S++;
        else
            R++;
    }
    if(S>R)
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