//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<array>
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
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}