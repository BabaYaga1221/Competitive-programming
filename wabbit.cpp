#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int c=(x2-x1)+(y2-y1);
    if(x1==x2==y1==y2)
    {0ol
        cout<<0<<endl;
    }
    else if(c%2==0)
    {
        if(x2==y2)
            cout<<x2+2<<endl;
        else if(x2>y2)
            cout<<x2+2<<endl;
        else  
            cout<<y2+2<<endl;
    }
    else  
    {
         if(x1==y1)
            cout<<x1<<endl;
        else if(x1<y1)
            cout<<x1<<endl;
        else  
            cout<<y1<<endl;
    }
}
    return 0;
}