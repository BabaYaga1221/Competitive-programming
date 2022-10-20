//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    cin>>n;
    std::vector<char>s(n);
    std::vector<char>t(n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>t[i];
    if(n==2)
    {
        if((s[0]==t[0] && s[1]==t[1]) || (s[0]==s[1] && t[0]==t[1]))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else{
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
            swap(s[i],t[i]),c++;
    }
    if(c==1 && s==t)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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