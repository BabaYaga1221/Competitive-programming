//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    string a=s;
    std::reverse(a.begin(),a.end());
    if(a!=s)
        cout<<s<<endl;
    else
    {
        bool q=false;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                swap(s[i],s[i+1]);
                q=true;
                break;
            }
        }
        if(q==true)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
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