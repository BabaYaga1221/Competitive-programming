//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,diff=0;
    cin>>n;
    std::vector<long>a(n);
    std::vector<long>b(n);
    for(long i=0;i<n;i++)
        cin>>a[i];
    for(long i=0;i<n;i++)
        cin>>b[i];
    if(a[0]>b[0])
    {
        for(int i=1;i<n;i++)
        {
            if(a[i]<b[0] || b[i]>a[0])
            {
                diff=i;
                break;
            }
            
        }
        cout<<diff<<endl;
    }
    else
        cout<<0<<endl;
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