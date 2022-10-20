//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,even=0,odd=0;
    cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
            even++;
        else    
            odd++;
    }
    if(n%2==0)
    {
        if((even-odd)==0)
            cout<<n<<endl;
        else if(odd==0 || even==0)
            cout<<n/2<<endl;
        else
            cout<<n-(abs(even-odd)/2)<<endl;
    }
    else
    {
        if(odd==0)
            cout<<(n/2)+1<<endl;
        else if(even==0)
            cout<<n/2<<endl;
        else if(odd>even)
            cout<<n-(((odd-even)/2)+1)<<endl;
        else
            cout<<n-((even-odd)/2)<<endl;
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