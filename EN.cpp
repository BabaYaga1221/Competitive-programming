#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int c=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='N')
            c++;
    }
    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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