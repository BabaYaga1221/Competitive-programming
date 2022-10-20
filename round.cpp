#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,c=0,r=0;
    cin>>n;
    int i=0;
    int a[r];
    while(n>0)
    {
        int p=n%10;
        if(p==0)
            c++;
        else
        {
            c++;
            r++;
            a[i]=p;
            i++;
        }
        n=n/10;
    }
    cout<<r<<endl;
    for(int j=r;j>0;j--)
    {
        cout<<10*c+a[j]<<endl;
        c--;
    }
}
    return 0;
}