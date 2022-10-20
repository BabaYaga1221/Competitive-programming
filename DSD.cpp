//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    if(n==2)
    {
        if(v[0]<v[1])
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<v[0]<<" "<<v[1]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<v[0]<<" ";
        for(int i=1;i<n;i++)
            cout<<v[i];
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