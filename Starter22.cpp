#include <bits/stdc++.h>
using namespace std;
signed main()
{
        int c, n, k;
        cin >> c >> n >> k;
        vector<pair<int, int>> cake(n);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            cake[i] = {l, r};
        }
        sort(cake.begin(), cake.end());
        int cnt = 0, pos = -1;
        for (int i = 1; i < n; i++)
        {
            if (cake[i - 1].second >= cake[i].first) {
                if (i + 1 < n && cake[i].second >= cake[i + 1].first)
                    i++;
                pos = i;
                cnt++;
            }
        }
        if (cnt == 0)
            puts("Good");
        else
        {
            if (k == 0 || cnt >= 2)
                puts("Bad");
            else
            {
                int dis = cake[pos - 1].second - cake[pos - 1].first;
                auto it = cake.begin() + pos - 1;
                cake.erase(it);
                int pre = 1, mx = 0;
                n = cake.size();
                // for (int i = 0; i < n; i++)
                //     cout << ar[i].first << ' ' << ar[i].second << endl;
                for (int i = 0; i < n; i++)
                {
                    mx = max(mx, cake[i].first - pre);
                    pre = max(pre, cake[i].second);
                }
                mx = max(mx, n - pre);
                if (mx >= dis + 1)
                    puts("Good");
                else
                    puts("Bad");
            }
        }

}