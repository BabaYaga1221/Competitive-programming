//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0,p=0;
    cin>>n;
    char a[2][n];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(int j=0;j<n-1;j++)
        {
            
            if((a[0][j+1]!='1' || a[1][j+1]!='1'))
            {
                p++;
            }
            else
                break;
        }
        if(p==n-1)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
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