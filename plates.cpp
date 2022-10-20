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
    int h,w;
    cin>>h>>w;
    if(h==w && (h%2==0 && w%2==0))
    {
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(i==1 && j%2!=0)
                    cout<<1;
                else if(i==1 && j%2==0)
                    cout<<0;
                else if(i==h)
                {
                    if(j%2!=0 && j!=w-1 && j!=1)
                        cout<<1;
                    else
                        cout<<0;
                }
                else if((j==1 || j==w) && i%2!=0)
                {
                    cout<<1;
                }
                else if((j!=1 || j!=w) && i%2==0)
                    cout<<0;
                else 
                    cout<<0;
            }
            cout<<endl;
        }
    }
    else
    {
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if((i==1 || i==h) && j%2!=0)
                {
                    cout<<1;
                }
                else if((i==1 || i==h) && j%2==0)
                {
                    cout<<0;
                }
                else if((j==1 || j==w) && i%2!=0)
                {
                    cout<<1;
                }
                else if((j!=1 || j!=w) && i%2==0)
                    cout<<0;
                else 
                    cout<<0;
            }
            cout<<endl;
        }
    }
}
    return 0;
}