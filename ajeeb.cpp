//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
long fun(long n)
{
    long a=0,b=1,ans=0;
    while(ans<n)
    {
        ans=a+b;
        a=b;
        b=ans;
    }
    return a;
}
void solve()
{
    long long n;
    cin>>n;
    if(n==1)
        cout<<0<<" "<<0<<" "<<1<<endl;
    else if(n==2)
        cout<<0<<" "<<1<<" "<<1<<endl;
    else
    {
        
        cout<<fun(n)<<" "<<fun(n)-fun(fun(n))<<" "<<fun(fun(n))-fun(fun(fun(n)))<<endl;
        
    }   
}
int main()
{
    solve();
    return 0;
}