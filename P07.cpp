#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            continue;
        }
        else
        {
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}