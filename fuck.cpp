//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
int main()
{
 
 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a == b) 
        cout << "0 0" << endl;
        else{
            int d =abs(a - b);
            cout << d << " " << d-(d%b) << endl;
        }
    }
    return 0;
}
