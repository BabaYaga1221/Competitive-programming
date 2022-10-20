#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int M,N;
    cin>>M>>N;
    if(M%2==0)
    {
        if(N%2==0)
            cout<<(M/2)*(N/2)<<endl;
        else
            cout<<(M/2)*((N/2)+1)<<endl;
    }
    else
    {
        if(N%2==0)
            cout<<((M/2)+1)*(N/2)<<endl;
        else
            cout<<((M/2)+1)*((N/2)+1)<<endl;
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