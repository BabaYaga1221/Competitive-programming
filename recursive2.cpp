//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int>vec(1000000);
int fact(int n, int arr[])
{
    vec[0]=0;
    int sum;
    int p=2;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    vec[1]=sum;
    for(int i=0;i<n;i++)
    {
        vec[p]=arr[i];
        p++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
        cin>>arr[i];
    fact(n,arr);
    return 0;
}