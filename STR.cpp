//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q=0;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int a=*std::max_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==a)
            q++;
    }
    cout<<q<<endl;
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