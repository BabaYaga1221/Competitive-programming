//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    std::cin>>n>>k;
    int a[n];
    int b[k];
    int s[n];
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    for(int i=0;i<k;i++)
        std::cin>>b[i];
    sort(b,b+k,greater<int>());
    int p=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=b[p];
            p++;
        }
    }
    s[n]=a[n];
    sort(s,s+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            c++;
    }
    if(c==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
int main()
{
    solve();
    return 0;
}