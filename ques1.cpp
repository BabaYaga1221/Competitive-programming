//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
long t;
cin>>t;
while(t--)
{
    long n;
    cin>>n;
    std::vector<long>vec(n+1);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    long c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((vec[i]*vec[j])==(i+1)+(j+1))
                c++;
        }
    }
    cout<<c<<endl;
}
    return 0;
}