#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,c=-1;
    cout<<"Enter a binary number for decimal conversation"<<endl;
    cin>>n;
    int res=0;
    while(n>0)
    {
        int a=n%10;
        c++;
        if(a==1)
            res=res+pow(2,c);
        n=n/10;
    }
    cout<<"The binary equivalent is "<<res<<endl;
}