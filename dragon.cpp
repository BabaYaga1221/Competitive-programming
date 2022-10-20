//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k,l,n,m;
    long d,c=0;
    std::cin>>k;
    std::cin>>l;
    std::cin>>n;
    std::cin>>m;
    std::cin>>d;
    if(k==1 || l==1 || n==1 || m==1)
        cout<<d<<endl;
    else
    {
        c=1;
        for(int i=2;i<=d;i++)
        {
            if(k%i>=0 || l%i>=0 || n%i>=0 || m%i>=0)
                c++;
        }
        cout<<c<<endl;
        // cout<<d-c<<endl;
    }    
}
int main()
{
    solve();
    return 0;
}