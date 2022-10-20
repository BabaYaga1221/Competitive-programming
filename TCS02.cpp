#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,f;
    cin>>n;
    std::vector<pair<long,pair<long,long>>>v;
    std::vector<pair<long,pair<long,long>>>q;
    for(long i=0;i<n;i++)
    {
        long T,A,I;
        cin>>T>>A>>I;
        v.push_back(make_pair(T,make_pair(A,I)));
    }
    cin>>f;
    for(long i=0;i<n;i++)
    {
        for(long j=i+1;j<n;j++)
        {
            if(v[i].second.first > v[j].second.first)
            {
                swap(v[i],v[j]);
            }
        }
    }
    q.push_back(make_pair(v[0].first,make_pair(v[0].second.first+v[0].second.second,1)));
    int check=0;
    for(long i=1;i<n;i++)
    {
        bool z=0,r=0;
        for(long j=0;j<q.size();j++)
        {
            if(v[i].second.first > q[j].second.first && q[j].second.second < q[r].second.second && v[i].first==f)
            {
                r=j;
                check=j+1;
                z=1;
            }
            else if(v[i].second.first > q[j].second.first)
            {
                r=j;
                z=1;
            }
        }
        if(z==0)
        {
            if(v[i].first==f)
            {
                q.push_back(make_pair(v[i].first,make_pair(v[i].second.first+v[i].second.second,1)));
                check=q.size();
            }
            else
                q.push_back(make_pair(v[i].first,make_pair(v[i].second.first+v[i].second.second,1)));
        }
        else
        {
            q[r].first=v[i].first;
            q[r].second.first=v[i].second.first+v[i].second.second;
            q[r].second.second +=1;
        }
    }
    int top=0,station=0;
    for(long i=0;i<q.size();i++)
    {
        if(top < q[i].second.second)
        {
            top=q[i].second.second;
            station=i+1;
        }
    }
    if(check==0)
    {
        cout<<1<<endl;
        cout<<station<<endl;
        bool first=0;
        for(long i=0;i<q.size();i++)
        {
            if(top == q[i].second.second)
            {
                if(f==1)
                    cout<<i+1<<endl;
                else
                    f=1;
            }
        }
    }
    else
    {
        cout<<check<<endl;
        cout<<station<<endl;
        bool first=0;
        for(long i=0;i<q.size();i++)
        {
            if(top == q[i].second.second)
            {
                if(f==1)
                    cout<<i+1<<endl;
                else
                    f=1;
            }
        }
    }

    // for(int i=0;i<q.size();i++)
    //     cout<<q[i].first<<" "<<q[i].second.first<<" "<<q[i].second.second<<endl;

}
int main()
{
    solve();
    return 0;
}