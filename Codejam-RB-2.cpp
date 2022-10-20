#include<bits/stdc++.h>
using namespace std;
long k=1;

void solve()
{
    long long int n,p,z,c=0;
    cin>>n>>p;
    std::vector<vector<long long>>v;
    for(long i=0;i<n;i++)
    {
        std::vector<long long>temp;
        for(long j=0;j<p;j++)
        {
            cin>>z;
            temp.push_back(z);
        }
        sort(temp.begin(),temp.end());
        v.push_back(temp);
    }
    long long q=0;
    bool f=true;
    for(int i=0;i<n;i++)
    {
        // std::cout<<q<<" _ "<<c<<endl;
        if(v[i][2]==q)
        {
            // std::cout<<q<<" ? "<<c<<endl;
            swap(v[i][0],v[i][2]);
            // f=false;
        }
        else if(v[i][1]==q)
        {
            // std::cout<<q<<" | "<<c<<endl;   
            swap(v[i][0],v[i][1]);
            // f=false;
        }
        for(int j=0;j<v[i].size();j++)
        {
            c=c+abs(v[i][j]-q);
            q=v[i][j];
        }
        
    }         
    // std::cout<<q<<" "<<c<<endl;
    std::cout<<"Case #"<<k<<": "<<c<<endl;


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