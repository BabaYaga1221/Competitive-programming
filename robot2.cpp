//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,ng=0;
    long long c=0;
    cin>>n;
    std::vector<long long>v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    for(long i=0;i<n;i++)
    {
        if((v[i]==0 || v[i]==-1) && ng%2==0)
            c++;
        else if((v[i]==0 || v[i]==-1) && ng%2!=0)
            c++,ng++;
        else if(v[i]>0 && v[i]!=1)
            c=c+v[i]-1;
        else if(v[i]<0)
            c=c+abs(v[i])-1,ng++;
        else
            c++;
    }
    if(c>0 && ng%2!=0)
        cout<<c+ng<<endl;
    else if(c>0)
        cout<<c<<endl;
}
int main()
{
    solve();
    return 0;
}