//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
long long XORnacci(long long a,long long b,long long n)
{
    long long c=0;
    if(n==0)
        return a;
    else if(n==1)
        return b;
    else{
    for(long i=2;i<=n;i++)
    {
        c=a^b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return c;
    }
}
void solve()
{
    long long a,b,n;
    cin>>a>>b>>n;
    cout<<XORnacci(a,b,n)<<endl;
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