//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,c=0;
    std::cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            std::cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='R' && j==m-1 && a[i][j]!='C')
            {    
                a[i][j]='D';
                c++;
            }
            else if(i==n-1)
            {
                if(a[i][j]=='D' && a[i][j]!='C')
                {
                    a[i][j]='R';
                    c++;
                }
            }
        }
    }
    std::cout<<c<<endl;
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