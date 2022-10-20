//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

//taken hint.
void solve()
{
    int n,sum=0;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }
    if(sum<n)
        cout<<1<<endl;
    else
        cout<<sum-n<<endl;
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