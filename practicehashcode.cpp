#include<bits/stdc++.h>
using namespace std;

void solve()
{
    std::vector<string>v;
    std::vector<string>::iterator i;
    std::vector<string>q;
    std::vector<string>::iterator j;
    int m;bool t=1,f=0;
    cin>>m;
    m=m*2;
    while(m--)
    {
        int p;
        string s;
        cin>>p;
        if(t==1){
        while(p--)
        {
            cin>>s;
            v.push_back(s);
        }
        t=0,f=1;
        }
        else if(f==1)
        {
            while(p--)
            {
                cin>>s;
                q.push_back(s);
            }
            f=0,t=1;
        }
    }
    sort(v.begin(),v.end());
    sort(q.begin(),q.end());
    i=std::unique(v.begin(),v.end());
    v.resize(std::distance(v.begin(),i));
    j=std::unique(q.begin(),q.end());
    q.resize(std::distance(q.begin(),j));
    bool flag=0;
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<q.size();j++)
        {
            if(v[i]==q[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            c++;
        }
        flag=0;
    }
    flag=0;
    cout<<c<<" ";
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<q.size();j++)
        {
            if(v[i]==q[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            cout<<v[i]<<" ";
        }
        flag=0;
    }
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}