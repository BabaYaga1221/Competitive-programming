#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f=false;
long long sum(vector<int>vec,long long sum,long long n,long long x)
{
    for(long long i=0;i<n;i++)
    {    
        sum+=vec[i];
        if(sum==x)
            f=true;
    }
    return sum;    
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        long long n,x;
        std::vector<int>vec(n+1);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        long long sum=0;
        
   }
   
   return 0;
}