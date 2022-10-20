//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    std::cin>>n;
    char a[n][7];
    int p[7]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
        {
            std::cin>>a[i][j];
        }
    }
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='1')
                p[i]=p[i]+1;
        }
    }
    sort(p,p+7);
    cout<<p[6]<<endl;
}
int main()
{
    solve();
    return 0;
}