#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    int p=gcd(a,b);
    int q=lcm(a,b);
    cout<<p<<" "<<q<<endl;
}
    return 0;
}