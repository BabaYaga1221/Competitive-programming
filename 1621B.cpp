#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    sum=a[0][2];
    cout<<sum<<endl;
    for(int i=1;i<n;i++)
    {
        sum=a[0][2];
        if(a[i][0]==a[0][0] && a[0][1]==a[i][1])
            cout<<sum<<endl;
        else if(a[i][0]!=a[0][0] && a[0][1]==a[i][1])
        {
            sum=max(sum,a[0][2]);
            cout<<sum<<endl;
        }
        else if(a[i][0]==a[0][0] && a[0][1]!=a[i][1])
        {
            sum=max(sum,a[i][2]);
            cout<<sum<<endl;
        }
        else
        {
            sum=sum+a[i][2];
            cout<<sum<<endl;
        }
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