#include<iostream>
using namespace std;
int main()
{
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    while(n1>0 && n2>0)
    {
        n1=n1-1;
        n2=n2-1;
    }
    if(n1 >0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}