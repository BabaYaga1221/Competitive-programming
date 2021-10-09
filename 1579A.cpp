//bismillahi rehmanir-raheem
//codeforces 1579A
#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    int A=0,B=0,C=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
            A++;
        else if(s[i]=='B')
            B++;
        else
            C++;
    }
    if(A+C==B || (A==B && C==0) || (C==B && A==0))
        cout<<"YES"<<endl;
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
