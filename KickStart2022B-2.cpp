#include<bits/stdc++.h>
using namespace std;
long k=1;
bool rev(long long n)
{
    long long temp=n,sum=0;    
    while(n>0)
    {    
        int r=n%10; 
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
        return true;    
    else    
        return false;
}
void solve()
{
    long long a,temp=1,c=0;
    cin>>a;
    for(long long i=1;i<=a;i++)
    {
        if(a%i==0 && rev(i)==true)
            c++;
    }
    cout<<"Case #"<<k<<": "<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        k++;
    }
    return 0;
}