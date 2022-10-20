#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    if(s%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
    return 0;
}