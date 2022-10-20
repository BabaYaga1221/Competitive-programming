//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    register long long int n;
    std::cin>>n;
    if(n%2==0)
    {
            while(n%2!=1)
            {
                if(n==1)
                    break;
                else
                    n=n/2;
            }
            if(n==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        
    }
    else
        std::cout<<"YES"<<endl;
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