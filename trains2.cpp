//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,x,b,y;
    bool z=false;
    cin>>n>>a>>x>>b>>y;
    for(int i=a,j=b;a<=b;a++,b--)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
            z=true;
            break;
        }
    }
    if(z==false)
        cout<<"NO"<<endl;
}
int main()
{
    solve();
    return 0;
}