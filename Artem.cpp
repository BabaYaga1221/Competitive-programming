//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n;
    cin>>n;
    if(n==1 || n==2)
        cout<<1<<endl;
    else
    {
        long s=0,c=0;
        for(int i=1;s<=n;i++)
        {
            if(s<n-1)
            {
            if(i%2!=0)
                s=s+1,c++;
            else
                s=s+2,c++;
            }
            else
                break;
        }
        cout<<c<<endl;
    }
}
int main()
{
    solve();
    return 0;
}