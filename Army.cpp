#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i=1,p=0,k=1;
    while(i<n-1)
    {
        i++;
        p=p+k;
        if(p>=n)
        {
            k=abs(p-k);
            p=0;
            p=p+k;
            cout<<p<<" ";
        }
        else
            k=k+i,cout<<p<<" ";
    }
}
int main()
{
    solve();
    return 0;
}