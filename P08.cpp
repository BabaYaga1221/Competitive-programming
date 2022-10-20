#include<bits

using namespace std;

void solve()
{
    int n,l,a;
    cin>>n>>l>>a;
    std::vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    int c=0;
    if(n==0)
    {
        while(l>=a)
        {
            c++;
            l=l-a;
        }
        cout<<c<<endl;
    }
    else{
    for(int i=0;i<=l;)
    {
        if(v[i].first==i)
        {
            
        }
    }
    cout<<c<<endl;
    }
}
int main()
{
    solve();
    return 0;
}