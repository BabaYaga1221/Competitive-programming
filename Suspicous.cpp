//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    std::cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    std::vector<char>::iterator it;
    std::vector<char>::iterator ip;
    it=std::unique(v.begin(),v.end());
    v.resize(std::distance(v.begin(),it));
    int q=v.size();
    for(int i=0;i<q;i++)
    {
        for(int j=i+1;j<q;j++)
        {
            if(v[i]==v[j])
                c++;
        }
    }
    if(c!=0)
        std::cout<<"NO"<<endl;
    else
        std::cout<<"YES"<<endl;
    // for(it=v.begin();it!=v.end();it++)
    //     cout<<*it;
    // cout<<endl;
    
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