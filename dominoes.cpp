#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2,w,b,c;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        int a=k1+k2;
        c=(2*n)-a;
        if(a%2==0)
        {
            if(a/2>=w && c/2>=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(a%2!=0)
        {
            if((a/2)>=w && (c/2)>=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
