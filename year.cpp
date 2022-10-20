#include<bits/stdc++.h>

using namespace std;
int main()
{
    int y;
    cin>>y;
    int a[3];
    y++;
    // while(y!=0)
    // {
    //     int d=y%10;
    //     a[i]=d;
    //     i++;
    //     y=y/10;
    // }
    if(y==1987)
        cout<<2013<<endl;
    else
    {
        while(true)
        {
            int i=0;
            int q=y;
            while(q!=0)
            {
                int d=q%10;
                a[i]=d;
                i++;
                q=q/10;
            }
            if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
            {
                cout<<a[3]<<a[2]<<a[1]<<a[0]<<endl;
                break;
            }
            else
            {
                y++;   
            }
        }
    }
    return 0;
}
