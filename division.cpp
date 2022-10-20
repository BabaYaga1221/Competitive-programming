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
    long long int p,q;
    cin>>p>>q;
    if(p%q!=0)
        cout<<p<<endl;
    else
    {
        for(long long int i=q;i>=2;i--)
        {
            if(p%i==0 && q%i!=0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
    return 0;
}