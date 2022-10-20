//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long l,r,sum=0;
    cin>>l>>r;
    for(long long i=l;i<=r;i++)
    {
        if(i%2==0)
            sum=sum+i;
        else
            sum=sum-i;
    }
    cout<<sum<<endl;
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