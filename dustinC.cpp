//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    std::cin>>n>>m;
    std::vector<string>s1(n);
    std::vector<string>s2(n);
    std::vector<string>s3(m);
    std::vector<string>s4(m);
    for(int i=0;i<n;i++)
    {
        std::cin>>s1[i]>>s2[i];
    }
    for(int i=0;i<m;i++)
    {
        std::cin>>s3[i]>>s4[i];
    }
    for(int i=0;i<m;i++)
    {
        string p=s4[i];
        p.pop_back();
        for(int j=0;j<n;j++)
        {
            if(p==s2[j])
            {
                cout<<s3[i]<<" "<<s4[i]<<" #"<<s1[j]<<endl;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}