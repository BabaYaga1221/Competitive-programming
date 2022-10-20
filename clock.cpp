//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0;
    bool f=false,p=false;
    cin>>n;
    while(n>0)
    {
        if(n%3==0 && f==false)
        {
            cout<<7;
            n=n-3;
            f=true;
        }
        else if(n==5 && p==false)
        {
            cout<<7;
            n=n-3;
            p=true;
        }
        else
        {
            cout<<1;
            n=n-2;
            f=true;
        }
    }
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