#include<iostream>
using namespace std;

int main()
{
int n,m,p=0,q=0;
cin>>n>>m;
string a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=="*" || p==0)
            {
                p=i+1;
                q=1;
            }
        else if(a[i][j]=="*" || q==1)
        {
            q=j-1;
            break;
        }
    }
}
cout<<p<<q<<endl;
    

    return 0;
}