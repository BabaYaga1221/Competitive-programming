//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int p=0,q=0,r=0,s=0;
    int a[3];
    int b[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    for(int i=0;i<3;i++)
    {
        if(a[i]==0)
            p++;
        else
            q++;
    }
    for(int i=0;i<3;i++)
    {
        if(b[i]==0)
            r++;
        else
            s++;
    }
    if(p==r && q==s)
        cout<<"Pass"<<endl;
    else
        cout<<"Fail"<<endl;
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