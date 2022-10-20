//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n;
    std::cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    if(n==2)
        std::cout<<v[0]*v[1]<<endl;
    else if(n%2==0)
        std::cout<<v[n-2]*v[n-3]<<endl;
    else if(n%2!=0)
        std::cout<<v[n-1]*v[n-2]<<endl;
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