//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t,i=1;
cin>>t;
while(t--)
{
    int a1,a2,a3,a4,a6,a7,a8,a9;
    bool A=false,B=false;
    int c=0;
    int a5;
    cin>>a1>>a2>>a3;
    cin>>a4>>a6;
    cin>>a7>>a8>>a9;
    if(a1==a2==a3==a4==a6==a7==a8==a9)
        {
            cout<<"Case#"<<i<<": "<<8<<endl;
            i++;
            break;
        }
    else if(a4-a1==a7-a4==a8-a7==a9-a8== a6-a9==a3-a6== a2-a3==a1-a2)
     {
         c=c+4;
        B=true;
     }  
    else if(a4-a1==a7-a4== a8-a7==a9-a8 == a6-a9==a3-a6) 
    {
        c=c+3;
        B=true;
    }
    else if(a4-a1==a7-a4 == a8-a7==a9-a8 == a2-a3==a1-a2)
    {
        c=c+3;
        B=true;
    }
    else if(a4-a1==a7-a4 == a8-a7==a9-a8 == a6-a9==a3-a6)
    {
        c=c+3;
        B=true;
    }

    int g1=a5-a1;
    int g2=a9-a5;
    int g3=a5-a3;
    int g4=a7-a5;
    int g5=a5-a2;
    int g6=a7-a5;
    int g7=a5-a4;
    int g8=a6-a5;
    if(g1==g2==g3==g4==g5==g6==g7==g8)
        c=c+4;
    else if((g1==g2==g3==g4==g5==g6) || (g1==g2==g3==g4==g7==g8) || (g1==g2==g5==g6==g7==g8)|| (g3==g4==g5==g6==g7==g8))
        c=c+3;
    else if((g1==g2==g3==g4)||(g1==g2==g5==g6)||(g1==g2==g7==g8)||(g3==g4==g5==g6)||(g3==g4==g7==g8)||(g5==g6==g7==g8))
        c=c+2;
    else
        c=c+1;
    bool big=false;
    if(A==true)
        cout<<"Case#"<<i<<": "<<8<<endl;
    else if(B==true && c!=0)
        cout<<"Case#"<<i<<": "<<c<<endl;
    i++;
}
    return 0;
}