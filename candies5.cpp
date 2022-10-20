//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,s=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        s=s+pow(2,i);
        if(n%(s+1)==0)
        {
            cout<<n/(s+1)<<endl;
            break;
        }
    }
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