#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int S;
        cin >> S;
        bool flag = 0;
        for (int a = 1; a < S; a++)
        {
            for (int b = 1; b < S; b++)
            {
                if (S == 4 * a * b + 3 * a + 3 * b)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if (!flag)
            ans++;
    }
    cout << ans << endl;
}