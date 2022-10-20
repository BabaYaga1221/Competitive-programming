//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
void input(std::vector<long>&v,long q)
{
    for(int i=0;i<q;i++)
        std::cin>>v[i];
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int k,n,m,c=0;
    cin>>k>>n>>m;
    int sum=n+m,p1=0,p2=0;
    std::vector<long>v1(n);
    std::vector<long>v2(m);
    std::vector<long>v3(sum);
    input(v1,n);
    input(v2,m);
    for(int i=0;i<sum;i++)
    {
        if(v1[p1]==0 && p1<n)
        {
            k++;
            v3[i]=v1[p1];
            p1++;
        }
        else if(v2[p2]==0 && p2<m)
        {
            k++;
            v3[i]=v2[p2];
            p2++;
        }
        else
        {
            if(v1[p1]!=0 && v1[p1]<=k && p1<n)
            {
                v3[i]=v1[p1];
                p1++;
            }
            else if(v2[p2]!=0 && v2[p2]<=k && p2<m)
            {
                v3[i]=v2[p2];
                p2++;
            }
            else
            {
                c++;
                break;
            }
        }
    }
    if(c==1)
    {
        cout<<-1<<endl;
    }
    else if(c==0)
    {
        for(int i=0;i<sum;i++)
            cout<<v3[i]<<" ";
        cout<<endl;
    }
}
    return 0;
}