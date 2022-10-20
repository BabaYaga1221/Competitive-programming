#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else{
    int t=1;
    for(int i=1;i<=n;i++)
        t=t*i;
    return t;
    }
}
int cat(int n)
{
    return fact(2*n)/fact(n+1);
}
int main()
{
    int n;
    cout<<"Enter the number to find Nth catalan number: "<<endl;
    cin>>n;
    cout<<cat(n)<<endl;
    return 0;
}