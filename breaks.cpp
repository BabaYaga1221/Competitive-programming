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
    int a[2*n],p[n];

    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<2*n;i++)
    {
        for(int j=i+1;j<2*n;j++)
        {
            if(a[i]==a[j])
            {
                p[k]=a[i];
                k++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}