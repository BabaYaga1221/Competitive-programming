//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n;
    cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    if(n%2!=0)
    {
        for(long i=0,j=n-1;i<(n/2)+1;i++,j--)
        {
            if(i%2==0)
            {
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    else
    {
        for(long i=0,j=n-1;i<n/2;i++,j--)
        {
            if(i%2==0)
            {
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    for(long i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}