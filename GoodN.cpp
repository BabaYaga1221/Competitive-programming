//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x,y,n=0,i=1;
    cin>>x>>y;
    n=x*y;
    if( n%2==0)
    {
        cout<<n/(2)<<" "<<n/2<<" "<<n<<endl;
    }
    else
    {
        cout<<n/2<<" "<<(n/2)+1<<" "<<n<<endl;
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