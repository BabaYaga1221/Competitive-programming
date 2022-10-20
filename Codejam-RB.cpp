#include<bits/stdc++.h>
using namespace std;
long k=1;

void solve()
{
    long n,temp,c=1;
    cin>>n;
    std::deque<long>v;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    temp=min(v.front(),v.back());
    if(temp==v.front())
        v.pop_front();
    else
        v.pop_back();
    int temp2=0;
    while(v.size()>0)
    {
        temp2=min(v.front(),v.back());
        if(v.front()==temp2)
        {
            if(temp2>=temp)
            {
                c++;
                temp=temp2;
                v.pop_front();
            }
            else
                v.pop_front();
        }
        else
        {
            if(temp2>=temp)
            {
                c++;
                temp=temp2;
                v.pop_back();
            }
            else
                v.pop_back();
        }
    }
    cout<<"Case #"<<k<<": "<<c<<endl;
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        solve();
        k++;
    }
    return 0;
}