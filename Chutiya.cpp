//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
// bool check(std::vector<int> &v, int m, int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]==m)
//             return true;
//     }
//     return false;
// }
void solve()
{
    int n,m,c=0,min2=0,min1=0;
    cin>>n>>m;
    std::vector<int>v(n);
    std::vector<int>r(m);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
        cin>>r[i];
    sort(v.begin(),v.end());
    sort(r.begin(),r.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i]==r[j])
            {
                cout<<v[i]<<endl;
                c++;
                break;
            }
        }
        if(c!=0)
            break;
    }
    if(c==0)
    {
        min1=*std::min_element(v.begin(),v.end());
        min2=*std::min_element(r.begin(),r.end());
        cout<<min(min1,min2)<<max(min1,min2)<<endl;
    }
}
int main()
{
    solve();
    return 0;
}