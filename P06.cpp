#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i=i+2)
    {
        for(int j=i+2;j<n;j=j+2)
        {
            if(s[i]>s[j])
                swap(s[i],s[j]);
        }
    }
    cout<<s<<endl;
}
int main()
{
    solve();
    return 0;
}