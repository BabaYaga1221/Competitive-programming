#include<iostream>
using namespace std;

int main()
{
    long long int n,k,i=0,c=0;
    bool f=true;
    cin>>n>>k;
    // while(n>0 && n>=k)
    // {
    //     if(f==true)
    //     {
    //     n=n-k;
    //     i++;
    //     f=false;
    //     }
    //     else
    //     {
    //         n=n-k;
    //         c++;
    //         f=true;
    //     }

    // }
    if( (n%2!=0 && k%2!=0))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}