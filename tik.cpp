//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    std::vector<int>v(n);
    for(int i=n-1;i>=0;i=i-2)
        cin>>v[i];
    sort(v.begin(),v.end());
    int m=n-1,z=n-2;
    while(true)
    {
        if(k<=0)
        {
            break;
        }
        else
        {
           for(int i=n-1;i>=0;i-2)
           {
                if(k==0)
                    break;
                else
                {
                    if(v[i]==0)
                    {
                        v[i]++;
                        v[i-1]--;
                        k--;
                    }
                    else if(v[i-1]==0)
                    {
                        v[i-1]++;
                        v[i]--;
                        k--;
                    }
                    else
                    {
                        v[i]++;
                        v[i-1]--;
                        k--;
                    }
                }
           } 
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
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