//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
 
        string s;
        cin >> s;
        int anu = s.size();
        int ans = s.size();
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '5')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '2' || s[j] == '7')
                        anu = min(anu, ans - j - 2);
                }
            }
            if (s[i] == '0')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '0' || s[j] == '5')
                        anu = min(anu, ans - j - 2);
                }
            }
        }
        cout << anu << endl;
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