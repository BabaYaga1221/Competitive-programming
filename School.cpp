//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,t;
    std::cin>>n>>t;
    std::vector<char>a(n);
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    for(int i=1;i<=t;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j==n-1 && a[j]=='B')
                continue;
            else if(a[j]=='B')
            {
                swap(a[j],a[j+1]);
                j--;
            }
        }
    }
    for(int i=0;i<n;i++)
        std::cout<<a[i];
    std::cout<<endl;
}
int main()
{
    solve();
    return 0;
}