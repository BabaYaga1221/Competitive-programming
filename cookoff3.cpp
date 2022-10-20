//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0,f=0,grap=0;
    cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        f=0;
        if(v[i]%3!=0)
        {
            f=1;
            for(int j=i+1;j<n;j++)
            {
                if(v[j]%3!=0)
                {
                if((v[i]-1)%3==0)
                {
                    v[i]--,v[j]++,c++,f--;
                    break;
                }
                else
                {
                    v[i]++,v[j]--,c++,f--;
                    break;
                }
                }
            }
            if(f==1)
                break;
        }
        else if(f==1)
            break;
    }
    if(f==1)
        cout<<-1<<endl;
    else
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