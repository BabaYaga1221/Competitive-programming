//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,r=0,p=0;
    cin>>n;
    int q=n;
    while(n>0)
    {
        for(int i=1;i<=2*q;i++)
        {
            if(i<=n || r==p)
                cout<<"(",r++;
            else 
                cout<<")",p++;
        }
        n--;
        cout<<endl;
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