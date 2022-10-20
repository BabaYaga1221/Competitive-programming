#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int c=n;
    int long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0, j=1;i<n,j<n;i++,j++)
    {
        if(a[j]-a[i]==0)
            c--;
        else if(a[j]-a[i]==1)
            c--;
        else
            break;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else if(c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}