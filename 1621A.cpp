#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(n/2>=k)
        {
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(i==j && i%2!=0 && k!=0)
                        {
                            cout<<'R';
                            k--;
                        }
                        else
                        {
                            cout<<'.';
                        }
                    }
                    cout<<endl;
            }
        }
        else
            cout<<-1<<endl;
    }
    else
    {
        if((n+1)/2>=k)
        {
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(i==j && i%2!=0 && k!=0)
                        {
                            cout<<'R';
                            k--;
                        }
                        else
                        {
                            cout<<'.';
                        }
                    }
                cout<<endl;
            }
        }
        else
            cout<<-1<<endl;
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