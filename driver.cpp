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
    long long n,k,d;
    cin>>n>>k>>d;
    long long x[n];
    int l[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>l[i];
    long long c=0;
    if(x[0]>x[1] && l[0]!=l[1])
        c+=x[0]-1,
    else if(x[1]>x[0] && l[1]!=l[0])

    
}
    return 0;
}