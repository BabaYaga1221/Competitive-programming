#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
            break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
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