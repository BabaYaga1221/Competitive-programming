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
    if(n%4==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}