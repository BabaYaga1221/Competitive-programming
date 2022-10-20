//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
void count1(std::vector<int> q, int a, int s)
{
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(a+q[i]>=s)
            c++;
    }
    cout<<c<<endl;
}
void count2(std::vector<int> q, int a, int s)
{
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(a+q[i]<=s)
            c++;
    }
    cout<<c<<endl;
}
void solve()
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    std::vector<int>v(m);
    std::vector<int>q(n);
    for(int i=0;i<m;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        cin>>q[i];
    count1(v,a,s);
    count2(q,b,t);

}
int main()
{
    solve();
    return 0;
}