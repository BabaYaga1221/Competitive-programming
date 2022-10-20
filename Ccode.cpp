//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k,One=0,c=0;
    bool f=false;
    cin>>n>>m>>k;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]!='0' && f==false)
        {
            c++;
            One++;
        }
        else if(f==true && v[i]!='0')
        {
            c++;
        }
        else    
            f=true;
    }
    if(c==n)
        cout<<100<<endl;
    else if(One>=m)
        cout<<k<<endl;
    else
        cout<<0<<endl;
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