//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0,c=0;
    cin>>n;
    std::vector<long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    if(n==1 && v[0]<=15)
        cout<<v[0]+15<<endl;
    else if(n==1 && v[0]>15)
        cout<<15<<endl;
    else
    {
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(v[i]>15)
            {
                cout<<15<<endl;
                break;
            }
        }
        else
        {
            if(abs(v[i-1]-v[i])>15)
            {
                cout<<v[i-1]+15<<endl;
                break;
            }
            else
                c++;
        }
    }
    if(c==n-1)
        cout<<90<<endl;
    }
}   
int main()
{
    solve();
    return 0;
}