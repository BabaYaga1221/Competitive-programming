#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    bool f=false;
    int l=s.length();
    // cout<<l<<endl;
    if(l%2==0)
    {
        for(int i=0,j=(l/2);i<l/2;i++,j++)
        {
            if(s[i]!=s[j])
            {
                f=true;
                break;
            }
        }
        if(f==true)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
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