//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int reverse( int n)
{
    int rev=0;
    while(n>0)
    {
        int q=n%10;
        rev=10*rev+q;
        n=n/10;
    }
    return rev;
}

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int rev=reverse(n);
    int f=n%10;
    int l=rev%10;
    cout<<f+l<<endl;
}
    return 0;
}