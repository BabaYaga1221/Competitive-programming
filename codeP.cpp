//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    bool p=true,z=true;
    int n,m,c=0;
    cin>>n>>m;
    std::vector<int>v(n),q(m);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
        cin>>q[i];
    int max=*std::max_element(q.begin(),q.end());
    for(int i=2;i<=max;i++)
    {
        p=true;
        for(int j=0;j<n;j++)
        {
            if(i%v[j]!=0)
            {
                p=false;
                break;
            }
        }
        if(p==true)
        {
            z=true;
            for(int k=0;k<m;k++)
            {
                if(v[k]%i!=0)
                {
                    z=false;
                    break;
                }
            }
            if(z==true)
                c++;
        }
    } 
    cout<<c<<endl;  
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