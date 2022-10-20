//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int x=0,y=0;
    if(n==1)
        cout<<0<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]=='U')
            {
                if(x==y && x!=0 )
                {
                    if(v[i-1]!='R')
                    {
                        c++;
                        y++;
                    }
                    else
                        y++;
                }
                else
                    y++;
            }
            else if(v[i]=='R')
            {
                if(x==y && y!=0)
                {
                    if(v[i-1]!='U')
                    {
                        c++;
                        x++;
                    }
                    else 
                        x++;
                }
                else
                    x++;
            }
            
        }
        cout<<c<<endl;
    }
}
int main()
{
    solve();
    return 0;
}