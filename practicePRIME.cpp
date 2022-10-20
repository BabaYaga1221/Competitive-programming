#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(prime(n)==true)
        cout<<"YES"<<endl;
    else  
        cout<<"NO"<<endl;
}
    return 0;
}