//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0;
    bool f1,f2,f3;
    f1=f2=true;
    f3=false;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==1 && f1!=false)
        {
            if(f2!=true)
            {
                f2=true;
                f3=false;
                c++;
            }
            else if(f3!=true)
            {
                f2=false;
                f3=true;
                c++;
            }
        }
        else if(a==2 && f2!=false)
        {
            if(f1!=true)
            {
                f1=true;
                f3=false;
                c++;
            }
            else if(f3!=true)
            {
                f1=false;
                f3=true;
                c++;
            }
        }
        else if(a==3 && f3!=false)
        {
            if(f1!=true)
            {
                f1=true;
                f2=false;
                c++;
            }
            else if(f2!=true)
            {
                f1=false;
                f2=true;
                c++;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            c=0;
            break;
        }
    }
    if(c!=0)
        cout<<"YES"<<endl;

}
int main()
{
    solve();
    return 0;
}