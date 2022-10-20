//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,sum=0,c=0;
    cin>>n;
    std::vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n==0)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]>sum/n)
                c++;
        }
        cout<<c<<endl;
    }
    else
        cout<<-1<<endl;
}
    return 0;
}