#include<bits/stdc++.h>
using namespace std;
#define pie 3.1415926535
long k=1;
void solve()
{
    long R,A,B;
    cin>>R>>A>>B;
    bool A1=false,B1=true,C1=true;
    double area=0;
    while(R>0)
    {
        if(A1==false)
        {
            area=area+(pie*R*R);
            A1=true;
            B1=false;
        }
        else if(B1==false)
        {
            R=R*A;
            area=area+(pie*R*R);
            B1=true;
            C1=false;
        }
        else if(C1==false)
        {
            R=R/B;
            area=area+(pie*R*R);
            C1=true;
            B1=false;
        }
    }
    cout<<"Case #"<<k<<": ";
    printf("%0.6f\n",area);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        k++;
    }
}