#include <bits/stdc++.h>
using namespace std;
long k = 1;

void solve()
{
    long N, D;
    cin>>N>>D;
    std::vector<long> pad(N);
    for (int i = 0; i < N; i++)
        cin>>pad[i];
    if (D == 2)
    {
        long cnt = 0;
        for (int i = 0; i < N; i++)
        {
            if(pad[i]==1)
            {
                for (int j = i; j < N; j++ )
                {
                    if (pad[j] == 1 && j==N-1)
                    {
                        cnt++;
                        pad[j]=0;
                        continue;
                    }
                    else if(pad[j]==1 && j!=N-1)
                    {
                        pad[j]=0;
                        continue;
                    }
                    else
                    {
                       cnt++;
                       break;
                    }
                }
            }
        }
        cout<<"Case #"<<k<<": "<<cnt<<endl;
    }
    else
    {
        cout<<endl;
    }
}
int main()
{
    long t;
    cin>>t;
    while (t--)
    {
        solve();
        k++;
    }
    return 0;
}