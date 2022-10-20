#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    long long n,m,q,c=0,max=0,p=0;
    cin>>n>>m;
    long long int sum=n+m;
    long long int sum2=n+m;

    std::vector<long long>v(sum);
    for(int i=0;i<sum;i++)
    {
        cin>>q;
        if(q!=-1)
        {
            v[i]=q;
        }
        else if(q==-1)
        {
            v[i]=q;
            c++;
        }
    }
    // for(long long r=0;r<sum2;r++)
    //     cout<<v[r]<<" ";
    // cout<<endl;
    for(long long j=1;j<=c;j++)
    {
        for(long long i=0;i<sum2;i++)
        {
            if(v[i]!=-1 && max<=v[i])
            {
                max=v[i];
                p=i;
            }
            else if(v[i]==-1)
            {
                cout<<max<<endl;
                max=0;
                v[i]=0;
                v[p]=0;
                break;
            }
        }
    }
    // for(long long r=0;r<sum2;r++)
    //     cout<<v[r]<<" ";
    // cout<<endl;
    return 0;
}