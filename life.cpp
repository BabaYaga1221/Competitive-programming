//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    char a[s.length()];
    for(int i=s.length()-1,j=0;i>=0;i--,j++)
        cout<<s[i];
    cout<<endl;
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