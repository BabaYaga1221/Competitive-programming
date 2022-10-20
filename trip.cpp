//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,v,cap=0,c=2,i=0;
    cin>>n>>v;
    int t=v;
    cap=v;
    while(true)
    {
        if(i>=n-1)
            break;
        else
        {
            // if(v==0 && n<=v)
            // {
            //     cap=cap+(i*abs(t-n-1));
            //     v=abs(t-n-1);
            // }
            if(v==0)
            {
                if(i>v){
                cap=cap+(i*t);
                v=t;
                }
                else 
                {
                    cap=cap+(i*abs(t-i-1));
                    v=abs(t-i-1);
                }
            }
            else
                i=i+v,v=0;
        }
    }
    cout<<cap<<endl;
}
int main()
{
    solve();
    return 0;
}