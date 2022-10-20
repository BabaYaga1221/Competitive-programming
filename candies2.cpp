#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int n;
    cin>>n;
    if(n<=2)
    {
        cout<<0<<endl;
    }
    else if(n%2==0)
    {
        cout<<(n/2)-1<<endl;
    }
    else if(n%2!=0)
    {
        n=n-1;
        cout<<n/2<<endl;
    }

}
    return 0;
}