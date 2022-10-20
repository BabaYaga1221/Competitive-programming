//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long r,b,d,sum=0;
    cin>>r>>b>>d;
    if(abs(r-b)==d)
        cout<<"YES"<<endl;
    else if(d==0)
    {
        if(r==b)
            cout<<"YES"<<endl;
        else if(r!=b)
            cout<<"NO"<<endl;
    }
    else
    {
        int m=min(r,b);
        int temp=m*d;
        int diff=max(r,b)-temp;
        if(diff<min(r,b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }    
}
    return 0;
}