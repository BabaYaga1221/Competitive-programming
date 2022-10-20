#include<iostream>
using namespace std;
int prime(int n)
{
    int c=1;
    for(int i=2;i<=n;i++)
        if(n%i==0)
            c++;
    if(c==2)
        return 0;
    else
        return 1;
}

int main()
{
long n;
cin>>n;
if(n%2==0 && prime(n)==0)
{
    n=n/2;
    cout<<n<<" "<<n<<endl;
}
else if(n%2==0 && prime(n)==1)
{
    long z=n/2;
    n=n/2;
    while(prime(n)==0 || prime(z)==0)
    {
        z--;
        n++;
    } 
    cout<<z<<" "<<n<<endl;
}
else
{
    n++;
    long z=n/2;
    n=n-z-1;
    while(prime(n)==0 || prime(z)==0)
    {
        z--;
        n++;   
    }
    cout<<z<<" "<<n<<endl;
    
}
return 0;
}