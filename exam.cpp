//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    std::cin>>n>>m;
    char e[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            std::cin>>e[i][j];
    }
    int a[m];
    long sum=0;
    for(int i=0;i<m;i++)
        std::cin>>a[i];
    for(int i=0;i<m;i++)
    {
        int c=0;
        int cf[5]={0};
        for(int j=0;j<n-1;j++)
        {
            if(e[j][i]==e[j+1][i])
            {
                if(e[j][i]=='A')
                    cf[0]=cf[0]+1;
                else if(e[j][i]=='B')
                    cf[1]=cf[1]+1;
                else if(e[j][i]=='C')
                    cf[2]=cf[2]+1;
                else if(e[j][i]=='D')
                    cf[3]=cf[3]+1;
                else if(e[j][i]='E')
                    cf[4]=cf[4]+1;
            }
            else
                c++;
        }
        int max=*std::max_element(cf,cf+5);
        if(max==n-1)
            sum=sum+(n*a[i]);
        else if(max==0)
            sum=sum+a[i];
        else 
            sum=sum+((max+1)*a[i]);
    }
    std::cout<<sum<<endl;
}
int main()
{
    solve();
}