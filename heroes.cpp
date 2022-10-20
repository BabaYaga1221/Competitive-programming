#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i++])
                c++;
        }
        if(c>0)
            c=n-c-1;
        else
            c=n-1;
       
        cout<<c<<endl;
    }
    return 0;
}