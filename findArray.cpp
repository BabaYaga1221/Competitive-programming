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
    int s,c=1,sum=1;
    cin>>s;
    int ans=1;
    while(sum<s)
    {
        c=c+2;
        sum=sum+c;
        ans++;
    }
    cout<<ans<<endl;
}
    return 0;
}