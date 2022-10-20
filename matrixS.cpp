//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    std::cin>>s;
    int n=s.length(),c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
            if(c+1>=7)
            {
                std::cout<<"YES"<<endl;
                c=7;
                break;
            }
        }
        else
            c=0;
    }
    if(c<7)
        std::cout<<"NO"<<endl;

}
int main()
{
   solve();
}