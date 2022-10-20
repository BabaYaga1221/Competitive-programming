//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n%3==0)
        cout<<"YES"<<endl;
    else if(n%7==0)
        cout<<"YES"<<endl;
    else {
    while(n>0)
    {
        if(n%3==0)
        {
            n=0;
            break;
        }
        else if(n%7==0)
        {
            n=0;
            break;
        }
        else if(n>=7)
            n=n-7;
        else 
            n=n-3;   
    }
    if(n==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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