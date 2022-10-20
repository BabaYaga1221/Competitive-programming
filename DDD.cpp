//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long int a,b,c=0;
    cin>>a>>b;
    if(a%b==0)
        cout<<0<<endl;
    else
    {
        while(a%b!=0)
        {
            a++;
            c++;
        }
        cout<<c<<endl;
    }
}
    return 0;
}