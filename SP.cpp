//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
int t,c=0;
cin>>t;
while(t--)
{
    int xA,yA,xB,yB,xF,yF;
    cin>>xA>>yA>>xB>>yB>>xF>>yF;
    int d=abs(xA-xB)+abs(yA-yB);
    if(xA==xB and xB==xF)
    {
        if(yF>min(yA,yB) && yF<max(yA,yB))
            d=d+2;
    }
    else if(yA==yB && yB==yF)
    {
        if(xF>min(xA,xB) && xF<max(xA,xB))
            d=d+2;
    }
        
      
    cout<<d<<endl;
    
}
    return 0;
}