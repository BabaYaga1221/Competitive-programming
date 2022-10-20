//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a1,a2,a3,a4;
    std::cin>>a1>>a2>>a3>>a4;
    if(a1==a2 && a2==a3 && a3==a4)
        cout<<0<<endl;
    else if(a1!=a2)
    {
        if(a3!=a4)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    else if(a1!=a3)
    {
        if(a2!=a4)
            cout<<2<<endl;
        else 
            cout<<1<<endl;
    }
    else if(a1!=a4)
    {
        if(a2!=a3)
            cout<<2<<endl;
        else 
            cout<<1<<endl;
    }
    else if(a2!=a3)
    {
        if(a1!=a4)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    else if(a2!=a4)
    {
        if(a1!=a3)
            cout<<2<<endl;
        else 
            cout<<1<<endl;
    }
    else if(a3!=a4)
    {
        if(a1!=a2)
            cout<<2<<endl;
        else
            cout<<1<<endl;
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