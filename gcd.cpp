#include<iostream>
using namespace std;
int digits(int x)
{
    int c=0;
    while(x>0)
    {
        int t=x%10;
        c=c+t;
        x=x/10;
    }
    return c;
}
int gcd(int a, int b)
{
    int c;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b  % i == 0)
        {
            c = i;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        bool p=true;
        cin>>n;
        while(p)
        {
            if(gcd(n,digits(n))>1)
            {
                cout<<n<<endl;
                break;
            }
            else
             n++;
        }
    }
    return 0;
}