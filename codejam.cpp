#include<bits/stdc++.h>
#define ten 1000000;
using namespace std;

int k=1;
void solve()
{
    std::vector<long>p1;
    std::vector<long>p2;
    std::vector<long>p3;
    std::vector<long>D;
    for(int i=0;i<3;i++)
    {
        int x;
        for(int j=0;j<4;j++)
        {
            if(i==0)
            {
                cin>>x;
                p1.push_back(x);
            }
            else if(i==1)
            {
                cin>>x;
                p2.push_back(x);
            }
            else if(i==2)
            {
                cin>>x;
                p3.push_back(x);
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        if(p1[i]==1000000 && p2[i]==1000000 && p3[i]==1000000)
            D.push_back(p1[i]);
        else
            D.push_back(min(p1[i],min(p2[i],p3[i])));
    }
    int zero=0,big=0;
    long sum=1000000;
    for(int i=0;i<4;i++)
    {
        if(sum-D[i]<=0)
        {
            D[i]=sum;
            sum=0;
        }
        else
        {
            sum=sum-D[i];
        }
    }
    if(sum > 0)
    {
        cout<<"Case #"<<k<<": IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<"Case #"<<k<<": ";
        for(int i=0;i<4;i++)
        {
            cout<<D[i]<<" ";
        }
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
        k++;
    }
    return 0;
}