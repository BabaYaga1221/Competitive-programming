//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void input(std::vector<int> &v,long n)
{
    for(int i=0;i<n;i++)
        std::cin>>v[i];
}
int main()
{
long t;
cin>>t;
while(t--)
{
    long n;
    cin>>n;
    std::vector<int>v1(n);
    std::vector<int>v2(n);
    std::vector<int>v3(n);
    std::vector<int>p(n);
    input(v1,n);
    input(v2,n);
    input(v3,n);
    p[0]=v1[0];
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            if(p[0]!=v1[i] && p[i-1]!=v1[i])
                p[i]=v1[i];
            else if(p[0]!=v2[i] && p[i-1]!=v2[i])
                p[i]=v2[i];
            else if(p[0]!=v3[i] && p[i-1]!=v3[i])
                p[i]=v3[i];
        }
        else if(p[i-1]==v1[i])
        {
            if(p[i-1]!=v2[i])
                p[i]=v2[i];
            else if(p[i-1]!=v3[i])
                p[i]=v3[i];
        }
        else if(p[i-1]==v2[i])
        {
            if(p[i-1]!=v1[i])
                p[i]=v1[i];
            else if(p[i-1]!=v3[i])
                p[i]=v3[i];
        }
        else if(p[i-1]==v3[i])
        {
            if(p[i-1]!=v2[i])
                p[i]=v2[i];
            else if(p[i-1]!=v1[i])
                p[i]=v1[i];
        }
        else if(p[i-1]!=v1[i])
            p[i]=v1[i];
        else if(p[i-1]!=v2[i])
            p[i]=v2[i];
        else if(p[i-1]!=v3[i])
            p[i]=v3[i];
    }
    for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
    cout<<endl;
}
    return 0;
}