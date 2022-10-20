//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
int c=1;
void solve()
{
    string s;
    std::cin>>s;
    string z=s;
    int n=s.length();
    if(n==1)
    {
        std::cout<<"Case #"<<c<<": IMPOSSIBLE"<<endl;
        c++;
    }
    else
    {
    for(int i=0;i<n-1;i++)
    {
        if(i!=-1)
        {
            char temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }
    }
    if(s.compare(z))
    {
        std::cout<<"Case #"<<c<<": "<<s<<endl;
        c++;
    }
    else
    {
        std::cout<<"Case #"<<c<<": IMPOSSIBLE"<<endl;
        c++;
    }
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