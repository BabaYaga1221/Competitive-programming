#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m;
        int c=0;
        cin>>n>>m;
        int a=n*m;
        if(a%2==0)
        {
            c=a/2;
        }
        else
        {
            c=(a/2)+1;
        }
        cout<<c<<endl;
    }
    return 0;
}