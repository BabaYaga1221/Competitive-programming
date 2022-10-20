#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    if(n==1)
        {
            cout<<"Ehab"<<endl;
            exit(0);
        }
    else{
    while(n>0)
    {
        if(i%2==0)
        {
            n=n-1;
            i++;
        }
        else
        {
            n=n-2;
            i++;
        }

    }
    }
    if(i%2==0)
        cout<<"Mahmoud"<<endl;
    else
        cout<<"Ehab"<<endl;
    return 0;
}