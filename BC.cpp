#include<iostream>
using namespace std;
int fact(int f)
{
    int t=1;
    for(int i=1;i<=f;i++)
        t=t*i;
    return t;
}
int BT(int n, int k)
{
    return fact(n)/(fact(k)*fact(n-k));

}

int main()
{
    int n,k;
    cin>>n>>k;
    int c=BT(n,k);
    cout<<c<<endl;
    return 0;
}