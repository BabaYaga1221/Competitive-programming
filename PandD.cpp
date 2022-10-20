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
    int n,m,k;
    cin>>n>>m>>k;
    int q=n*m;
    if(q/2>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}