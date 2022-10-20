//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,c;
    cin>>n>>m;
    std::vector<int>v(n);
    for(int i=0;i<m;i++)
    {
        cin>>c;
        ++v[c-1];
    }
        cout<<*std::min_element(v.begin(),v.end())<<endl;
}
int main()
{
    solve();
    return 0;
}