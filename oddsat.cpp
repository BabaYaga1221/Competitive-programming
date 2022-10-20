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
    int n;
    cin>>n;
    int v[2*n];
    for(int i=0;i<2*n;i++)
        cin>>v[i];
    int j=0,k=0;
    for(int i=0;i<2*n;i++)
    {
        if(v[i]%2==0)
            j++;
        else 
            k++;
    }
    if(j==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}