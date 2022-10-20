//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n; 
    double sum=0;
        std::cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
        std::cin>>v[i];
    sort(v.begin(),v.end());
    long long temp=v[n-1];
    v[n-1]=0;
    n--;
    for(long i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    sum=sum/n;
    sum=sum+temp;
    printf("%.9lf\n",sum);
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


