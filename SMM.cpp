//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,c=0,p=0,sum=0;
    cin>>n>>k;
    std::vector<long long>v(k);
    for(int i=0;i<k;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int i=k-1;
    while(true)
    {
        sum=sum+(k-v[i]);
        if(sum<n)
        {
            p++;
            i--;
        }
        else
            break;
    }
    cout<<p<<endl;
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