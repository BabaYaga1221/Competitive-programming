//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,q,c=0;
    cin>>n>>q;
    std::vector<long> v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    for(long i=0;i<n-1;i++)
    {
        if(v[i]+q<v[i+1]-q)
            c=c+2;
        else if(v[i]+q==v[i+1]-q)
            c++;
    }  
    cout<<c+2<<endl; 
}
int main()
{
    solve();
    return 0;
}