//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long n;
    int q=8;
    cin>>n;
    if(n==1)
        cout<<9;
    else
    {
        cout<<9;
        for(long i=1;i<n;i++)
        {
            if(q!=10)
            {
                cout<<q;
                q++;
            }
            else if(q==10)
            {
                q=0;
                cout<<q;
                q++;
            }
        }
    }
    cout<<endl;
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