//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long a,b,c,m;
    cin>>a>>b>>c>>m;
    while(m>0)
    {
        if(a>=2)
            a=a-2,m--;
        else if(b>=2)
            b=b-2,m--;
        else if(c>=2)
            c=c-2,m--;
        else
            break;
    }
    if((a<=b || b<=c || c<=a) && m==0)
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