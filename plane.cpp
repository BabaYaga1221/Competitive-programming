#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    long n,p=0,ng=0;
    cin>>n;
    long long int x[n],y[n];
    for(long i=0;i<n;i++)
        cin>>x[i]>>y[i];
    if(n==2)
        cout<<"YES"<<endl;
    else
    {
        for( long i=0;i<n;i++)
        {
            if(x[i]>0)
            {
                p++;
            }
            if(x[i]<0)
            {
                ng++;
            }
        }
        if(p==ng)
            cout<<"NO"<<endl;
        else if(ng==1 || p==1 || ng==0 || p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}