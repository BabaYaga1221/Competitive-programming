#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    std::cin>>n>>m;
    if(m==0 || m==1)
        cout<<1<<endl;
    else
    {ro
        cout<<min(m,n-m)<<endl;
    }
}