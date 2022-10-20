//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long int sum_of_digits(long long int n)
{
    long long int s=0;
    while(n>0)
    {
        int t=n%10;
        s+=t;
        n/=10;
    }
    return s;
}
long long int gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
    long long int n;
    cin>>n;
    while(gcd(n,sum_of_digits(n))==1)
    {
        n++;
    }
    cout<<n<<endl;
    }
    return 0;
}