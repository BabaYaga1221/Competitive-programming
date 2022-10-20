//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,O=0,C=0;
    bool a1=false,a2=false;
    cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]=='(')
            O++;
        else
        {
            if(O>0)
                O--;
            else
                C++;
        }
    }
    cout<<C<<endl;
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