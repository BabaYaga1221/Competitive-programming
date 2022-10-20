//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0,s=0;
    std::cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>v[i];
        sum=sum+v[i];
    }
    sort(v.begin(),v.end());
    int p=0;
    for(int i=n-1;i>=0;i--)
    {
        if(sum>=s)
        {
            s=s+v[i];
            sum=sum-v[i];
            p++;
        }
        else
            break;
    }
    std::cout<<p<<endl;
}
int main()
{
    solve();
    return 0;
}