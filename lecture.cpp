//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0;
    cin>>n;
    char a[n][5];
    int p=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]=='1' && p!=j)
            {
                c++;
                p=j;
                break;
            }
        }
    }
    if(c>=2)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
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