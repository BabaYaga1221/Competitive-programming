//bismillahi rehmanir-raheem
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C, D, E, r = 0, s = 0;
    cin >> A >> B >> C >> D >> E;
    int p = min(A, min(B, C));
    if((A+B) <= D && C<=E)
        cout<<"YES"<<endl;
    else if((A+C)<=D && B<=E)
        cout<<"YES"<<endl;
    else if((B+C) <=D && A<=E)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}