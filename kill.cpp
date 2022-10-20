//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,z,c=0;
    cin>>n>>m>>z;
    if(n==m)
        cout<<z/n<<endl;
    else
    {
        for(int i=n;i<=z;i=i+n)
        {
            if(i%m==0)
            {
                c++;
            }

        }
        cout<<c<<endl;
    }
}
int main()
{
    solve();
    return 0;
}