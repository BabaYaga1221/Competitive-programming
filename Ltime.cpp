//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    cin>>n;
    int h=0,m=0;
    cin>>h>>m;
    if(m%10==7 || m/10==7 || h%10==7 || h/10==7)
        cout<<0<<endl;
    else{
    while(true)
    {
        if(m%10==7 || m/10==7)
            break;
        else if(m<=0)
        {
            h--;
            if(h/10==7 || h%10==7)
                break;
            else if(h==0)
                h=23;
            else {
                cout<<c<<"% ";
                cout<<m<<" ";
                m=59+m;
                // cout<<m<<" ";
                m=m-n;
                c++;
                cout<<m<<" ";
            }
        }
        else
            m=m-n,c++;
    }
    cout<<c<<endl;
    }
}
int main()
{
    solve();
    return 0;
}