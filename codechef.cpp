//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n;
    cin>>n;
    std::vector<long>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    bool c[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            c[i][j]=true;
    }
    for(int i=0;i<n;i++)
    {
        c[a[i]-1][b[i]-1]=false;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         cout<<c[i][j]<<" ";
    //     cout<<endl;
    // }
    int col=0,r=0,play=0,flag=1;
    for(int i=0;i<n;i++)
    {
            if(c[col+1][r]==true)
                col++,play++;
            else if(c[col][r+1]==true)
                r++,play++;
            else
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
    }
    if(play==n)
        cout<<"YES"<<endl;
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