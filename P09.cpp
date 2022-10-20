#include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;
using namespace std;

std::vector<char> v;
// std::vector<pair<int,int>>v;
// std::vector<tuple<int,int,int>>v;
void solve()
{
    ll n;
    cin >> n;
    REP(i, 0, n)
    cin >> v[i];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}