//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string a,b;
    std::cin>>a>>b;
    std::cin>>n;
    string v[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
            std::cin>>v[i][j];
    }
    cout<<a<<" "<<b<<endl;
    string t1=a,t2=b;
    for(int i=0;i<n;i++)
    {
        if(v[i][0]==t1)
        {
            t1=v[i][1];
            cout<<t1<<" "<<t2<<endl;
        }
        else if(v[i][0]==t2)
        {
            t2=v[i][1];
            cout<<t1<<" "<<t2<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}