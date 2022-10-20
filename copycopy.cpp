#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int n,c=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
            c++;
        }
    }
    if(c==0)
        cout<<n<<endl;
    else
        cout<<n-c<<endl;
}
    return 0;
}