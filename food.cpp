//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,q=0;
    cin>>a>>b>>c;
    bool p1=true,p2=true,p3=true,p4=true,p5=true,p6=true,p7=true;
    while(true)
    {
        if(a>0 || b>0 || c>0)
        {
            if(a>0 && p7==true)
                a--,p7=false,q++;
            else if(b>0 && p6==true)
                b--,p6=false,q++;
            else if(c>0 && p5==true)
                c--,p5=false,q++;
            else if(b>c && a>c && p4==true)
                a--,b--,p4=false,q++;
            else if(c>=b && a>=b && p3==true)
                a--,c--,p3=false,q++;
            else if(b>0 && c>0 && p2==true)
                b--,c--,q++,p2=false;
            else if(b>0 && a>0 && c>0 && p1==true)
                b--,c--,a--,p1=false,q++;
            else
                break;
        }
        else
            break;
    }
    cout<<q<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}