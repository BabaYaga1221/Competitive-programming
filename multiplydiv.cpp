//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0;
    cin>>n;
    while(n>1)
    {
        if(n%6==0)
        {
            n=n/6;
            c++;
        }
        else
        {
            n=n*2;
            c++;
        }
    }
    if(n==1)
        cout<<c<<endl;
    else
        cout<<-1<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}