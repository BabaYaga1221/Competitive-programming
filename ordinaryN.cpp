//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    std::cin>>n;
    long long c=0;
    if(n<=9)
        std::cout<<n<<endl;
    else
    {
        c=0;
        int a=1;
        {
            for(long i=1;i<=9;i++)
            {
                for(long long j=i;j<=n;j=j*10+i)
                {
                    c++;
                }
            }
        }
        std::cout<<c<<endl;
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