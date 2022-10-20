//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,temp=0,p=0;
    cin>>n>>k;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(k%v[i]==0 && p<v[i])
        {
            temp=k/v[i];
            p=v[i];
        }
    }
    cout<<temp<<endl;
}
int main()
{
    solve();
    return 0;
}