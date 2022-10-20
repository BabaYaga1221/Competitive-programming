//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long n,c=0;
    cin>>n;
    std::vector<char>v(n);
    std::vector<char>r(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        r[i]=v[i];
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]!=r[i])
            c++;
    }
    cout<<c<<endl;
}
    return 0;
}