//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,l,c=0,m=0;
    bool f=true;
    cin>>n>>k>>l;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i!=n-1)
        {
            if(v[i]>m)
                m=v[i];
        }
    }
    if(v[n-1]==m && k>0 && l>1)
        cout<<"Yes"<<endl;
    else
    {
        v[n-1]=v[n-1]+((l-1)*k);
        if(v[n-1]>m)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
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