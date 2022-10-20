//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,A,B,sum=0;
    cin>>n>>A>>B;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]=='0')
            sum=sum+A;
        else if(v[i]=='1')
            sum=sum+B;
    }
    cout<<sum<<endl;
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