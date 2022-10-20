#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2;
    cin >> s;
    int c1, c2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char x = s.at(i);
        if (isupper(x))
            c1++;
        else
            c2++;
    }
    if (c1 > c2)
    {
        for (int j = 0; j < s.length(); j++)
        {
            char x = s[j];
            char y = toupper(x);
            s1 = s1 + y;
        }
        cout << s1;
    }
    else if (c2 > c1 || c1 == c2)
    {
        for (int p = 0; p < s.length(); p++)
        {
            char m = s[p];
            char n = tolower(m);
            s2 = s2 + n;
        }
        cout << s2;
    }
    return 0;
}