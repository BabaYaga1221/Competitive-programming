//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,l,r,c=0;
    std::cin>>n>>l>>r;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            register long long p=v[i]+v[j];
            if(p>=l && p<=r)
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