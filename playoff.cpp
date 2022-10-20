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
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(s1>s2 && s3>s4 && s3>s2 && s1>s4)
        cout<<"YES"<<endl;
    else if(s1>s2 && s4>s3 && s4>s2 && s1>s3)
        cout<<"YES"<<endl;
    else if(s2>s1 && s3>s4 && s3>s1 && s2>s4)
        cout<<"YES"<<endl;
    else if(s2>s1 && s4>s3 && s4>s1 && s2>s3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}