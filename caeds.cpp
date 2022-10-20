#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,a=0;
        long int n;
        cin>>w>>h>>n;
        long int c=w*h;
        while(c>1)
        {
            if(c%2==0)
            {
            a=a+2;
            c=c/2;
            }
            else
            {
                break;
            }
        }
        if(n==1)
            cout<<"YES"<<endl;
        else if(a>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}