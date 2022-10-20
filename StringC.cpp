//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,z,b,c=0;
    char s[n];
    string a="abcdefghijklmnopqrstuvwxyz";
    cin>>n>>z>>b;
    for(int i=0;i<n;i++)
    {
        if(b!=0)
        {
            s[i]=a[i];
            c++;
            b--;
        }
        else
        {
            i=i+c;
            for(int j=c;j<c+c;j++)
            {
                s[j]=a[j];
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
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