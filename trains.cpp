#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
                c++;
        }
        }
        cout<<c<<endl;
    }
    return 0;
}