//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int n,m;
    cin>>n>>m;
    vector<int>vec(0,n);
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        vec.push_back(ele);
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]==1 && m>0)
        {
            vec[i-1]=1;
            vec[i+1]=1;
            m--;
        }
        else if(i==0 && vec[i]==1 && m>0)
        {
            vec[i+1]=1;
            m--;
        }
        else if(i==n-1)
    }
}
    return 0;
}