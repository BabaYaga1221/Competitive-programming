//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
//logic seen.
void solve()
{
    int n,H,c=0;
    cin>>n>>H;
    bool a1=false,a2=false;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    // while(H>0)
    // {
    //     if(a1==false)
    //     {
    //         c++;
    //         H=H-v[0];
    //         a1=true;
    //         a2=false;
    //     }
    //     else if(a2==false)
    //     {
    //         c++;
    //         H=H-v[1];
    //         a2=true;
    //         a1=false;
    //     }
    // }
    if(H%(v[0]+v[1])==0)
        cout<<2*(H/(v[0]+v[1]))<<endl;
    else if(H%(v[0]+v[1])<=v[0])
        cout<<(2*(H/(v[0]+v[1])))+1<<endl;
    else
        cout<<(2*(H/(v[0]+v[1])))+2<<endl;
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