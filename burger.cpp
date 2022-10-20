#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,c=0;
    long int m;
    cin>>n>>m;
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        c=c+a[i];
    }
    if(c==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}