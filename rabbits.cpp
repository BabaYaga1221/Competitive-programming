#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int x,y,a,b,c=0;
    cin>>x>>y>>a>>b;
    int p=(x+y)/2;
    int q=a+b;
    if(p%q==0)
        cout<<(y-x)/q<<endl;
    else
        cout<<-1<<endl;
    // while(x!=y)
    // {
    //     if(x<y)
    //     {
    //         x=x+a;
    //         y=y-b;
    //         c++;
    //     }
    //     else
    //         break;
    // }
    // if(c>=0 && x==y)
    //     cout<<c<<endl;
    // else
    //     cout<<-1<<endl;
}
    return 0;
}