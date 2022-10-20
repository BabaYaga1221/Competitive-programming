//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    std::cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]=='?')
        {
            if(i==0)
            {
                if(v[i+1]=='?')
                    v[i]='B';
                else if(v[i+1]=='R')
                    v[i]='B';
                else if(v[i+1]=='B')
                    v[i]='R';
                else
                    v[i]='R';
            }
            else if(i==n-1)
            {
                if(v[i-1]=='R')
                    v[i]='B';
                else 
                    v[i]='R';
            }
            else
            {
                if(v[i+1]=='?' && v[i-1]=='R')
                    v[i]='B';
                else if(v[i+1]=='?' && v[i-1]=='B')
                    v[i]='R';
                else if(v[i+1]=='B' && v[i-1]=='B')
                    v[i]='R';
                else if(v[i+1]=='R' && v[i-1]=='R')
                    v[i]='B';
                else 
                    v[i]='R';
            }

        }
    }
    for(int i=0;i<n;i++)
        std::cout<<v[i];
    std::cout<<endl;
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