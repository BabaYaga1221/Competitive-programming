//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    bool a=false;
    int n=s.length(),c=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            if(a==false)
                c++,a=true;
            else
                continue;
        }
        else
            a=false;
    }
    if(c>=2)
        cout<<2<<endl;
    else
        cout<<c<<endl;
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