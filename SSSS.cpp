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
    long long int n;
    cin>>n;
    if(n>=1 && n<=8)
        cout<<0<<endl;
    else if(n==9)
        cout<<1<<endl;
    else
    {
        int q=n%10;
        if(q<9)
            cout<<n/10<<endl;
        else if(q==9)
            cout<<(n/10)+1<<endl;
    }
}
    return 0;
}