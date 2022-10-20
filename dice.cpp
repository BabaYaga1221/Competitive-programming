#include<iostream>
using namespace std;

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    if(a>b)
    {
        c=7-a;
        if(c==1)
            cout<<"1/6"<<endl;
        else if(c==2)
            cout<<"1/3"<<endl;
        else if(c==3)
            cout<<"1/2"<<endl;
        else if(c==4)
            cout<<"2/3"<<endl;
        else if(c==5)
            cout<<"5/6"<<endl;
        else
            cout<<"1/1"<<endl;
    }
    else
    {
        c=7-b;
        if(c==1)
            cout<<"1/6"<<endl;
        else if(c==2)
            cout<<"1/3"<<endl;
        else if(c==3)
            cout<<"1/2"<<endl;
        else if(c==4)
            cout<<"2/3"<<endl;
        else if(c==5)
            cout<<"5/6"<<endl;
        else
            cout<<"1/1"<<endl;
    }
}