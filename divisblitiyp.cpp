#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long int a,b,c=0;
    cin>>a>>b;
     if(a%b!=0)

        {

            c=b-(a%b);

            cout<<c<<endl;

        }

        else

         cout<<"0"<<endl;

}
    return 0;
}