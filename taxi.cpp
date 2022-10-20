//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,B=0;
    float res=100000.0;
    std::cin>>a>>b;
    if(a==0 || b==0)
        B=max(abs(a),abs(b));
    else
        B=a*b;
    int n;
    std::cin>>n;
    while(n!=0)
    {
        int x,y,z,q=0;
        float f=0.0;
        std::cin>>x>>y>>z;
        if(x==0 || y==0)
            q=max(abs(x),abs(y));
        else
            q=abs(x*y);
        q=abs(B-q);
        f=(float)q/z;
        res=min(res,f);
        n--;
    }
    printf("%0.20f",res);
}
int main()
{
    solve();
    return 0;
}