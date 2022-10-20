#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    double x = 0, m = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double s = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        long long temp = a[n - 1];
        a[n - 1] = 0;
        n--;
        for (int k = 0; k < n; k++)
        {
            s = s + a[k];
        }
        s = s / (n);
        m = temp + s;
        printf("%.9lf", m);
    }
    return 0;
}