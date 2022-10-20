#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b,c,d,e,f,p1=0,p2=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    if(e>=f)
    {
        if(a>d)
        {
            p1=d;
            d=0;
            cout<<p1*e<<endl;
        }
        else if(a<=d)
        {
            p1=a;
            d=d-a;
            if(d<=b && d<=c)
            {
                p2=d;
                cout<<(p1*e)+(p2*f)<<endl;
            }
            else if(b<d && b<=c)
            {
                p2=b;
                cout<<(p1*e)+(p2*f)<<endl;
            }
            else if(c<=b && c<d)
            {
                p2=c;
                cout<<(p1*e)+(p2*f)<<endl;
            }
        }
    }
    else if(f>e)
    {
        if(b==c && b==d && c==d)
        {
            p2=d;
            cout<<p2*f<<endl;
        }
        else if(b<=c && b<d)
        {
            p2=b;
            d=d-b;
            if(d<=a)
            {
                p1=d;
                cout<<(p2*f)+(p1*e)<<endl;
            }
            else if(a<d)
            {
                p1=a;
                cout<<(p1*e)+(p2*f)<<endl;
            }
        }
        else if(c<b && c<d)
        {
            p2=c;
            d=d-c;
            if(d<=a)
            {
                p1=d;
                cout<<(p2*f)+(p1*e)<<endl;
            }
            else if(a<d)
            {
                p1=a;
                cout<<(p1*e)+(p2*f)<<endl;
            }
        }
        else if(d<=b && d<=c)
        {
            p2=d;
            cout<<p2*f<<endl;
        }
    }
    return 0;
}