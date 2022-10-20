#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int r[3]={0,0,0};
    int c[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                r[p]=i+1;
                c[p]=j+1;
                p++;
            }
        }
    }
    sort(r,r+3);
    sort(c,c+3);
    if(r[0]==r[1])
    {
        if(c[0]==c[1])
            cout<<r[2]<<" "<<c[2]<<endl;
        else
            cout<<r[2]<<" "<<c[0]<<endl;
    }
    else if(r[1]==r[2])
    {
        if(c[0]==c[1])
            cout<<r[0]<<" "<<c[2]<<endl;
        else
            cout<<r[0]<<" "<<c[0]<<endl;
    }
  
 return 0;   
}