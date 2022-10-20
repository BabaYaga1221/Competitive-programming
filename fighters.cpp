//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=1;
    std::cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            break;
        }
        else if(v[i]!=v[i+1])
            break;
        else
            c++;
    }
    cout<<n-c<<endl;
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