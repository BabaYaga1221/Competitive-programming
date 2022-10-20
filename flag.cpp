#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,c=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=a[i+1][j])
            {
                if(a[i][j]==a[i][j+1])
                    continue;
                else
                {
                    c++;
                    break;
                }
            }
            else{
                c++;
                break;
            }
        }
        if(c!=0)
            break;
    }
    if(c!=0)
        cout<<"NO"<<endl;
    else
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