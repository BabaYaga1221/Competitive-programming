//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long W,H,x1,y1,x2,y2,w,h;
    float d;
    cin>>W>>H;
    cin>>x1>>y1>>x2>>y2;
    cin>>w>>h;
    if((x2==W && y2==H) && (w>x1 && h>y1))
    {
        cout<<-1<<endl;
    }
    else if(h==H)
    {
        d=w-min(x1,x2);
        printf("%0.6f",d);
        cout<<endl;
    }
    else if((w<W && h<H) || w==W)
    {
        d=h-min(y1,y2);
        printf("%0.9f",d);
        cout<<endl;
    }
    else if(w==W && h==h && x2==W && y2==H)
    {
        
    }
    
}
    return 0;
}