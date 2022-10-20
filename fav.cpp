//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,p=0;
    std::cin>>n;
    std::vector<long>q(n);
    std::vector<long>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    if(n==1)
        cout<<v[0]<<endl;
    else if(n%2==0)
    {
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        cout<<v[i]<<" "<<v[j]<<" ";
    }
    cout<<endl;
    }
    else if(n%2!=0)
    {
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            cout<<v[i]<<" "<<v[j]<<" ";
        }
        cout<<v[n/2]<<" ";
        cout<<endl;
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