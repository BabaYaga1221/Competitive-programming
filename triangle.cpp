//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int a,b;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v[i]=a+b;
    }
    cout<<*std::max_element(v.begin(),v.end());
}
int main()
{
    solve();
    return 0;
}