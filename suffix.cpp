#include<iostream>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    string s1=s.substr(s.length()-2,s.length());
    string s2=s.substr(s.length()-4,s.length());
    string s3=s.substr(s.length()-5,s.length());
    if(s1=="po")
        cout<<"FILIPINO"<<endl;
    else if(s2=="desu" || s2=="masu")
        cout<<"JAPANESE"<<endl;
    else if(s3=="mnida")
        cout<<"KOREAN"<<endl;
}
return 0;
}