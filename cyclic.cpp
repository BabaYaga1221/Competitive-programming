//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    std::vector<long long>q=v;
    while(true)
    {
        int z=0;
        for(int i=0;i<n-1;i++)
        {
            if(q[i]>q[i+1])
            {
                c++;
                swap(q[i],q[i+1]);
                z++;
            }
        }
        if(z==0)
            break;
    }
    cout<<c<<endl;
    while(true)
    {
        int z=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                cout<<i+1<<" "<<i+2<<" "<<1<<endl;
                swap(v[i],v[i+1]);
                z++;
            }
        }
        if(z==0)
            break;
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