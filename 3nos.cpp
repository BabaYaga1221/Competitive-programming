//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int z=max(a,max(b,max(c,d)));
    if(z-a==0)
        cout<<z-b<<" "<<z-c<<" "<<z-d<<endl;
    else if(z-b==0)
        cout<<z-a<<" "<<z-c<<" "<<z-d<<endl;
    else if(z-c==0)
        cout<<z-a<<" "<<z-b<<" "<<z-d<<endl;
    else 
        cout<<z-a<<" "<<z-b<<" "<<z-c<<endl;
}
int main()
{
    solve();
    return 0;
}