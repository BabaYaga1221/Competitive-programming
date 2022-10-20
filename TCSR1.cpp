#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,total=0;
    cin>>n>>n;
    int a,b;
    char p;
    cin>>a>>p>>b;
    int v[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            v[i][j]=0;
    }
    int index=0;
    for(int i=0;i<n;i++)
    {
        int a1,a2,a3;
        cin>>a1>>p>>a2;
        cin>>a3;
        v[a1][a2]=a3;
        index++;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         cout<<v[i][j]<<" ";
    //     cout<<endl;
    // }
    bool check=true;
    while(cin>>p)
    {
        if(p=='R')
        {
            if(a>=n)
            {
                check=false;
                break;
            }
            else{
                a++;
                total -=1;
                if(v[a][b]!=0)
                {
                    total +=v[a][b];
                    v[a][b]=0;
                    index--;
                }
            }
        }
        if(p=='L')
        {
            if(a<0)
            {
                check=false;
                break;
            }
            else{
                a--;
                total -=1;
                if(v[a][b]!=0)
                {
                    total +=v[a][b];
                    v[a][b]=0;
                    index--;
                }
            }
        }
        if(p=='D')
        {
            if(b>=n)
            {
                check=false;
                break;
            }
                b++;
                total -=2;
                if(v[a][b]!=0)
                {
                    total +=v[a][b];
                    v[a][b]=0;
                    index--;
                }
        }
        if(p=='U')
        {
            if(b<0)
            {
                check=false;
                break;
            }
            b++;
            total -=2;
            if(v[a][b]!=0)
            {
                total +=v[a][b];
                v[a][b]=0;
                index--;
            }
        }
        if(p=='Q')
        {
            break;
        }
    }
    if(index==0 && check==true)
    {
        cout<<"***Mission Passed!***"<<endl;
        cout<<"you have collected maximum points: "<<total<<endl;
    }
    else
    {
        cout<<"***Mission Failed!***"<<endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         cout<<v[i][j]<<" ";
    //     cout<<endl;
    // }
}
int main()
{
    solve();
    return 0;
}