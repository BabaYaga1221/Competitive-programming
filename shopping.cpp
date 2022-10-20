#include<iostream>
using namespace std;

int main()
{
    long int a,b,c,d,e,f,tot=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    while(d>0)
    {
        if(e>f && a>0)
        {
            tot=tot+e;
            a--;
            d--;
        }
        else if(f>e && b>0 && c>0)
        {
            tot+=f;
            b--;
            c--;
            d--;
        }
        else
            break;
    }
    cout<<tot<<endl;
}
