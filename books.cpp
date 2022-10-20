//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m;
    std::vector<int>v(m);
    for(int i=0;i<m;i++)
        cin>>v[i];
    cin>>n;
    while(n--)
    {
        int T,temp;
        cin>>T;
        cout<<v[T-1]<<endl;
        temp=v[T-1];
        v.erase(v.begin()+T-1);
    }
    
    return 0;
}