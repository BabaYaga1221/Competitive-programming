//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
long t;
cin>>t;
while(t--)
{
    int n,m;
    long k;
    cin>>n>>m>>k;
    long p=n*m;
    if(k==(p-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}