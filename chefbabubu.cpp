#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1+1==r2-1)
            std::cout<<l1<<" "<<r2-1<<endl;
        else
            std::cout<<l1+1<<" "<<r2-1<<endl;
    }
    return 0;
}