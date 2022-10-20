#include<iostream>
using namespace std;
int check(int x, int y)
    {
        int R=0,B=0;
        while(x>0)
        {
            int t=x%10;
            for(int i=0;i<n;i++)
            {
                int p=y%10;
                if(p>t)
                    R++;
                else
                    B++;
                
            }
        }
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r,b;
        cin>>r;
        cin>>b;
        if(r==b)
            cout<<"EQUAL"<<endl;
        else
            {

            }

    }
}