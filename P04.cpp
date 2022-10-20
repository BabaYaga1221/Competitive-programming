#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s,a;
    cin>>s>>a;
    int n;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        a[i]=tolower(a[i]);
    }
    if(s[n]<a[n])
        cout<<-1<<endl;
    else if(s[n]>a[n])
        cout<<1<<endl;
    else
        cout<<0<<endl;
    cout<<s[n-1]<<" "<<a[n-1]<<endl;
}
int main()
{
    solve();
    return 0;
}