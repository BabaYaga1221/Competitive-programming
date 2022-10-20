//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x=0,p=0;
    cin>>n;
    bool f=false;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        x=max(x,v[i+1]-v[i]);
        if(p!=x && p!=0)
        {
            cout<<-1<<endl;
            f=true;
            break;
        }
        p=x;
    }
    if(f==false)
        cout<<x<<endl;
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