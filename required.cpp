//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
long t;
cin>>t;
while(t--)
{
    long long x,y,n;
    cin>>x>>y>>n;
    long long D=n/x;
        if((D*x+y)<=n)
            cout<<D*x+y<<endl;
        else
            cout<<D*x+y-x<<endl;
}
    return 0;
}