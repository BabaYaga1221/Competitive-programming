#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"fibonacci number of the nth term is"<<fib(n)<<endl;
    return 0;
}