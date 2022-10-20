//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(k%2==0)
    {
        if(n%2==0)
            cout<<n<<endl;
        else
        {
            cout<<(k/2*(n/k))+(k/2*((n/k)+1))<<endl;
        }
    }
    else
    {
        cout<<(k/2*)
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