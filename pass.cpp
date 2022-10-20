#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int c;
        cin>>n;
        int  a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i++])
            {
                c++;
            }
        }
        if(c==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;

}