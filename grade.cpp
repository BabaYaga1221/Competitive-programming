//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
int sum(std::vector<int> v, int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    float x=(float)sum/n;
    // std::printf("%0.9f",x);
    return round(x);
}
void solve()
{
    int n,c=0;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(true)
    {
        if(sum(v,n)==5)
            break;
        else
        {
            for(int j=0;j<n;j++)
            {
                if(v[j]!=5)
                {
                    v[j]=5;
                    c++;
                    break;
                }
            }
        }

    }
    // for(int i=0;i<n;i++)
    //     cout<<v[i];
    // cout<<endl;
    cout<<c<<endl;
}
int main()
{
    solve();
    return 0;
}