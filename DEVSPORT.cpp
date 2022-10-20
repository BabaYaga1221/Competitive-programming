#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long Z,Y,A,B,C;
    cin>>Z>>Y>>A>>B>>C;
    long d=Z-Y;
    if(d>=(A+B+C))
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