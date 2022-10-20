//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 4;
    else
        return(fact(n-1)+fact(n-2)+fact(n-3));
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}