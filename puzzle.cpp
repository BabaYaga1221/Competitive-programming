#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    std::vector<int>v(m);
    std::vector<int>q(n);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
        if(v[i]==v[i-1] && n==2)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    sort(v.begin(),v.end());
     cout<<v[n-1]-v[0]<<endl;
}