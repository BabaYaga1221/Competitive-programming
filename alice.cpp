//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U')
            cout<<"D";
        else if(a[i]=='D')
            cout<<"U";
        else
            cout<<a[i];
    }
    cout<<endl;
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