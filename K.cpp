//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
long t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;
    if(n==1)
        cout<<0<<endl;
    else if(n==2)
        cout<<1<<endl;
    else 
        cout<<n-2<<endl;
}
    return 0;
}