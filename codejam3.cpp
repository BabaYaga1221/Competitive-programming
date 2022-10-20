#include<iostream>
#include<algorithm>
#include<vector>
#define ten 1000000;
using namespace std;

int k=1;
void solve()
{
    std::vector<long>module;
    std::vector<long>a;
    std::vector<pair<int,long>>q;
    long long n,temp;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>temp;
        module.push_back(temp);
    }
    for(long long i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(long long i=0;i<n;i++)
    {
        q.push_back(make_pair(a[i],module[i]));
    }
    for(long long i=0;i<n;i++)
    {
        cout<<q[i].first<<" "<<q[i].second<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        k++;
    }
    return 0;
}