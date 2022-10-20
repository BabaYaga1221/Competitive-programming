#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    int m=max(l1,max(l2,l3));
    if(l1==l2 && l3%2==0)
        cout<<"YES"<<endl;
    else if(l2==l3 && l1%2==0)
        cout<<"YES"<<endl;
    else if(l1==l3 && l2%2==0)
        cout<<"YES"<<endl;
    else if(l1==m)
    {
        if(m-l2==l3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(l2==m)
    {
        if(m-l1==l3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(l3==m)
    {
        if(m-l2==l1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
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