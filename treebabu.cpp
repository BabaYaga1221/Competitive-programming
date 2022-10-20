//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,s1=0,s2=0;
    cin>>n;
    std::vector<long>v(n);
    for(long i=0;i<n;i++)
        std::cin>>v[i];
    sort(v.begin(),v.end());
    if(n%2==0)
    {
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            s1=s1+v[i];
            s2=s2+v[j];
        }
        cout<<(s1*s1)+(s2*s2)<<endl;
    }
    else
    {
        s2=s2+v[n-1];
        n--;
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            s1=s1+v[i];
            s2=s2+v[j];
        }
        cout<<(s1*s1)+(s2*s2)<<endl;
    }
}
int main()
{
    solve();
    return 0;
}