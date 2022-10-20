//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    bool f=true;
    for(int i=0;i<n;i++)
    {
        f=true;
        for(int j=0;j<n-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                f=false;
                break;
            }
        }
        if(f==false)
            c++;
    }
    cout<<c<<endl;
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