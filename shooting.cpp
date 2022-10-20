//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=1;
    cin>>n;
    std::vector<int>v(n);
    std::vector<int>q(n);
    for(int i=0;i<n;i++)
        cin>>v[i],q[i]=v[i];
    sort(q.begin(),q.end(),greater<int>());
    for(int i=1;i<n;i++)
    {
        sum=sum+(q[i]*i)+1;
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(q[i]==v[j])
            {
                cout<<j+1<<" ";
                v[j]=-1;
                break;
            }
        }
    }
    cout<<endl;
    
}
int main()
{
    solve();
    return 0;
}