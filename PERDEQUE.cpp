//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int t=0,l=0;
    std::deque<int>v(n);
    std::deque<int>q;
    for(int i=0;i<n;i++)
        cin>>v[i];
    q.push_back(v[0]),t=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]<t)
            q.push_front(v[i]),t=v[i];
        else if(v[i]>t)
            q.push_back(v[i]),t=v[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(q[i]!=v[i])
            c++;
    }
    if(c<=2){
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";
    cout<<endl;
    }
    else
    {
     for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;   
    }
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