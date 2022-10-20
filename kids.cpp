#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int i=4*n;
    while(n>0)
    {
        cout<<i<<" ";
        n--;
        i=i-2;
    }
    cout<<endl;
}
    return 0;
}