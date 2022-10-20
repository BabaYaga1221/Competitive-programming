#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int c=0;
        cin>>n;
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
                c++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                c++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                c++;
            }
            else
                break;
        }
        if(n==1)
            cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}