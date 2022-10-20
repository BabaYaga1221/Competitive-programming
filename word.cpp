//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int p=0,q=0;
    std::cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            p++;
        else 
            q++;
    }
    if(p>q)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
        std::cout<<s<<endl;
    }
    else 
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        std::cout<<s<<endl;
    }
}
int main()
{
    solve();
    return 0;
}