//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,c=0;
    std::cin>>n>>k;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    long long max=*std::max_element(v.begin(),v.end());
    if(max==k)
        max=max+*std::min_element(v.begin(),v.end());
    else
        max=max-k;
    for(int i=0;i<n;i++)
    {
        if(abs(v[i]-max)>k)
        {
            c++;
            break;
        }
    }
    if(c==0)
        std::cout<<max<<endl;
    else
        std::cout<<-1<<endl;

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