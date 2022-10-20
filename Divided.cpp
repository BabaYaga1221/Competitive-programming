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
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    long long s1=1,s2=1;
    for(int i=l1;i<=r1;i++)
        s1=s1*i;
    for(int i=l2;i<=r2;i++)
        s2=s2*i;
    if(s2%s1==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}