#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int p = 0;
    cin >> n >> k;
    while (true)
    {
        if (n == 10)
        {
            p = 275 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 9)
        {
            p = 225 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 8)
        {
            p = 180 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 7)
        {
            p = 140 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 6)
        {
            p = 105 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 5)
        {
            p = 75 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 4)
        {
            p = 50 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 3)
        {
            p = 30 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 2)
        {
            p = 15 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else if (n == 1)
        {
            p = 5 + k;
            if (240 - p >= 0)
            {
                cout << n << endl;
                break;
            }
            else
                n--;
        }
        else
        {
            cout << n << endl;
            break;
        }
    }

    return 0;
}