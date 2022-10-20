#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,a,b,c,d;
    cin>>n>>m;
    a=n,b=0;
    c=m,d=0;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*')
            {
                a=min(a,i);
                b=max(b,i);
                c=min(c,j);
                d=max(d,j);
            }
        }
    }
    for(int i=a;i<=b;i++)
    {
        for(int j=c;j<=d;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}
int main()
{
    solve();
    return 0;
}