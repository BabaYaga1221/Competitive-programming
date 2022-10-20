//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int E=0,O=0;
    std::cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>v[i];
        if(v[i]%2==0)
            E++;
        else
            O++;
    }
    if(O==0 || (E==0 && n%2==0))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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