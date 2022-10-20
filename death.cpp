//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,m,sum=0;
   std::cin>>n>>m;
   std::vector<long long>v(n);
   for(int i=0;i<n;i++)
        std::cin>>v[i];
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
        if(sum/m>=1)
        {
            if(sum%m==0)
            {
                cout<<sum/m<<" ";
                sum=0;
            }
            else
            {
                cout<<sum/m<<" ";
                sum=sum-(m*(sum/m));
            }
        }
        else
            cout<<sum/m<<" ";
    }
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}