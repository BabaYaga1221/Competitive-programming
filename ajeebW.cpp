//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string x,y;
    bool f=false;
    std::cin>>x>>y;
    char z[x.length()];
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==y[i])
        {
            if(x[i]=='z')
                z[i]=x[i];
            else
                z[i]=(int)x[i]+1;
        }
        else if(x[i]!=y[i])
        {
            if(x[i]>y[i])
                z[i]=y[i];
            else
            {
                f=true;
                break;
            }
        }
    }
    if(f==true)
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<x.length();i++)
            cout<<z[i];
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}