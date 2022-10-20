//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,sum=0;
    cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<v[i]<<" ";
            sum=sum+v[i];
        }
        else
        {
            if(v[i]<0)
            {
                cout<<sum+v[i]<<" ";
            }
            else
            {
                sum=sum+v[i];
                cout<<sum<<" ";
            }
        }
    }
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}