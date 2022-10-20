#include<iostream>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long int Px,Py;
    cin>>Px>>Py;
    string n;
    cin>>n;
    int l=n.length();
    int U,D,L,R;
    for(int i=0;i<l;i++)
    {
        if(n[i]=='R')
            R++;
        else if(n[i]=='L')
            L++;
        else if(n[i]=='U') 
            U++;
        else
            D++;
    }
    if((Px>0 && Py>0) && (R>=Px && U>=Py))
        cout<<"YES"<<endl;
    else if((Px>0 && Py<0) && (R>=Px && D>=-(Py)))
        cout<<"YES"<<endl;
    else if((Px<0 && Py>0) && (L>=-(Px) && U>=Py))
        cout<<"YES"<<endl;
    else if((Px<0 && Py<0) && (L>=-(Px) && D>=-(Py)))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}
    return 0;
}