#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    std::vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=v[k-1] && v[i]>0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}