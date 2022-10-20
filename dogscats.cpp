//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
bool Prime(long x) {
    for (long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long y,c=0;
    register long x;
    scanf("%ld %ld",&x,&y);
    for(long i=x;i<y;)
    {
        if(Prime(i+2)==true)
            c++,i=i+2;
        else
            c++,i=i+1;
    }
    printf("%ld\n",c);
}
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}