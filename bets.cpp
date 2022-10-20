//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
long long t;
cin>>t;
while(t--)
{
    long long int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<0<<" "<<0<<endl;
    else 
    {
        long long int q=abs(a-b);
        cout<<q<<" "<<min(a%q,q-(a%q))<<endl;
    }
}
    return 0;
}