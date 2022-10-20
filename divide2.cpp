//bismillahi rehmanir-raheem
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long q=0,sum1=0,sum2=0;
    std::vector<long>p(n);
    std::vector<long>a(n/2);
    std::vector<long>b(n/2);
    for(long i=1;i<=n;i++)
    {
        p[q]=pow(2,i);
        q++;
    }
    if(n==2)
        cout<<2<<endl;
    else
    {
        cout<<p[n/2]-p[0]<<endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i]<<" ";
    // }
    // cout<<endl;
}
    return 0;
}