//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    std::cin>>n;
    int r[2],c[2];
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
        }
    }
    for(int i=0,x=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='*')
            {
              r[x]=i;
              c[x]=j;
              x++;
            }
        }
    }
    if(c[0]==c[1] && c[0]!=n-1)
    {
        a[r[0]][c[0]+1]='*';
        a[r[1]][c[0]+1]='*';
    }
    else if(c[0]==c[1] && c[0]==n-1)
    {
        a[r[0]][c[0]-1]='*';
        a[r[1]][c[0]-1]='*';
    }
    else if(r[0]==r[1] && r[0]!=n-1)
    {
        a[r[0]+1][c[0]]='*';
        a[r[0]+1][c[1]]='*';
    }
    else if(r[0]==r[1] && r[0]==n-1)
    {
        a[r[0]-1][c[0]]='*';
        a[r[0]-1][c[1]]='*';
    }
    else
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(a[r[i]][c[j]]!='*')
                    a[r[i]][c[j]]='*';
            }
        }
    }      
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
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