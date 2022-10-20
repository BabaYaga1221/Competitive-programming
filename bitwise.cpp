#include <bits/stdc++.h>

using namespace std;
int64_t t, n, m, k, a[1000005];
string s;

void solve()
{

    int64_t ans = 0;
    for (int j = 0; j <= 30; j++)
    {
        bool b = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!(a[i] & (1 << j)))
                b = 1;
        }
        if (!b)
            ans += (1 << j);
    }

    cout << ans << "\n";
}

int main()
{
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        solve();
    }
}