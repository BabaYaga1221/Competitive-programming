//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int x1,x2,x3,y1,y2,y3;
    int d=0;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    if(x1==x2==x3)
    {
        if(y1>y2)
        {
            if(y3<y1 && y3>y2)
                d=y1-y2+2;
            else
                d=y1-y2;
        }
        else if(y2>y1)
        {
            if(y3<y2 && y3>y1)
                d=y2-y1+2;
            else  
                d=y2-y1;
        }
    }
    else if(y1==y2==y3)
    {
        if(x1>x2)
        {
            if(x3<x1 && x3>x2)
                d=x1-x2+2;
            else
                d=x1-x2;
        }
        else if(x2>x1)
        {
            if(x3<x2 && x3>x1)
                d=x2-x1+2;
            else  
                d=x2-x1;
        }
    }
    else
    {
        if(x1>x2 || y1>y2)
        {
            d=(x1-x2)+(y1-y2);
        }
        else if(x2>x1 || y2>y1)
        {
            d=(x2-x1)+(y2-y1);
        }
    }
    cout<<d<<endl;
    
}
    return 0;
}