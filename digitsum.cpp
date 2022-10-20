//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
long divd(long q,long i)
{
    long sum=0;
    while(q>0)
        {
            long a=q%i;
            sum=sum+a;
            q=q/i;
        }
    return sum;
}
void solve()
{
    long long n,l,r,sum=0,h=0,H=0;
    cin>>n>>l>>r;
    h=n;
    for(long i=l;i<=r;i++)
    {
        sum=divd(n,i);
        if(h>sum)
        {
            if(sum==1)
            {
                H=i;
                break;
            }
            else{
            H=i;
            h=sum;
            sum=0;
            }
        }
        else
        {
            sum=0;
        }
    }
    cout<<H<<endl;
    // cout<<sum<<l<<r<<endl;
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