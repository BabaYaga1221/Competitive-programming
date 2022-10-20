//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a1,a2,a3;
    std::cin>>a1>>a2>>a3;
    long long diffrence=2*(abs(a1-a2)-1)+2;
    if(diffrence<max(a1,a2) || diffrence<a3)
        std::cout<<-1<<endl;
    else
    {
        long long good=a3+abs(a1-a2);
        long long bad=a3-abs(a1-a2);
        if(good<=diffrence)
            std::cout<<good<<endl;        
        else if(bad>0)
            std::cout<<bad<<endl;
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}