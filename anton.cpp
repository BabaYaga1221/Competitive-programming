#include<iostream>
using namespace std;

int main()
{
    int k2,k3,k5,k6,c=0,t=0,sum=0;
    cin>>k2>>k3>>k5>>k6;
    while(k2>0)
    {
    if(k2!=0 && k5!=0 && k6!=0)
    {
        c++;
        k2--;
        k5--;
        k6--;
    }
    else 
    {
        if(k3==0)
            break;
        else
        {
        t++;
        k2--;
        k3--;
        }
    }
    }
    sum=(256*c)+(32*t);
    cout<<sum<<endl;
    return 0;
}