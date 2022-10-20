//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c,n;
    cin>>a>>b>>c>>n;
    long long p=max(a,max(b,c));
    // cout<<p<<endl;
    while(n>0)
    {
        if(a!=p && n>0)
        {
            n=n-(p-a);
            a=p;
        }
        else if(b!=p && n>0)
        {
            n=n-(p-b);
            b=p;
        }
        else if(c!=p && n>0)
        {
            n=n-(p-c);
            c=p;
        }
        else if(n%3==0 && (a==b && b==c && c==a))
        {
            n=0;
            break;
        }
        else
        {
            break;
        }
    }
    if(n==0 && (a==b && b==c && c==a))
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