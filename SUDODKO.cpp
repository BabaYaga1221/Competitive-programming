//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
bool grid(long val,long &a,long *i,long *j)
{
    int c=0;
    for(long *z=j;*z<=*j+3;*z++)
    {
        for(long *x=i;*x=*i+3;*x++)
        {
            if(a[z][x]==val)
                c++;
        }
    }
    if(c==1)
        return true;
    else
        return false;
}
bool col(long val,long &a,long n,long *i)
{
     int c=0;
    for(int *j=0;*j<n*n;*j++)
    {
        if(a[i][j]==val)
            c++;
    }
    if(c==2)
        return false;
    else if(c==1)
        return true;
}
bool row(long val,long &a,long n,long *j)
{
    int c=0;
    for(int *i=0;*i<n*n;*i++)
    {
        if(a[j][i]==val)
            c++;
    }
    if(c==2)
        return false;
    else if(c==1)
        return true;
}
void solve()
{
    long n,c=0;
    cin>>n;
    long a[n*n][n*n];
    for(int i=0;i<n*n;i++)
    {
        for(int j=0;j<n*n;j++)
            cin>>a[i][j];
    }
    for(long i=0;i<n*n;i++)
    {
        for(long j=0;j<n*n;j++)
        {
            if(row(a[i][j],a[n*n][n*n],n,&j)==false || col(a[i][j],a[n*n][n*n],n,&i)==false || grid(a[i][j],a[n*n][n*n],&i,&j)==false)
            {
                cout<<"NO"<<endl;
                c++;
            }
        }
    }
    if(c!=0)
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