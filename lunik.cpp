//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s1=0,s2=0,c=0,q=0;
    cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s1=s1+v[i];
        s2=s2+v[i];
    }
    std::sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
            c++;
        else if(v[i]==0)
            q++;
        else 
            break;
    }
    cout<<pow(2,q)*c<<endl;

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