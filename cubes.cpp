#include <bits/stdc++.h>

using namespace std;
int main()
{
    long n, sum = 0;
    cin >> n;
    long d = n;
    // if(n==2)
    //     cout<<1<<endl;
    // else
    // {
    for (long i = 1; i <= n; i++)
    {
        sum += i;
        n = n - sum;
        if (sum + i >= n)
        {
            cout << i << endl;
            break;
        }
        else if (n == 0)
        {
            cout << i << endl;
            break;
        }
        else if (n < 0)
        {
            cout << i - 1 << endl;
            break;
        }
    }

    return 0;
}