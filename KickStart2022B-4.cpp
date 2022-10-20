#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
using namespace std;

//std::vector<int>v;
//std::vector<pair<int,int>>v;
//std::vector<tuple<int,int,int>>v;
void solve()
{
    
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int L=0,R=0;
    string A;
    cin>>A;
    for(int i=0;i<A.length()-1;i++)
    {
        if(A[i]=='L')
            L++;
        else if(A[i]=='R')
            R++;
    }
    int tell=min(L,R);
    cout<<L<<" "<<R<<endl;
    return 0;
}