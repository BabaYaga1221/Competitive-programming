#include<iostream>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t>0)
    {
        cin>>n>>m;
        int ar[n],br[m],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>br[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i]==br[j])
                {
                    c=ar[i];
                    break;
                }
            }
        }
        if(c!=0)
        {
            cout<<"YES"<<endl;
            cout<<"1 "<<c<<endl;
        }
        else
            cout<<"NO"<<endl;
        t--;
    }


    return 0;
}