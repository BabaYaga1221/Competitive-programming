//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0;
    std::cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            std::cout<<"no"<<endl;
            c++;
            break;
        }
    }
    if(c==0)
        std::cout<<"yes"<<endl;

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