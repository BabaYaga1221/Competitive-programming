#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                if(a[i]>a[j])
                {
                     int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                 }
            }
        }
        int c=a[0]*a[2];
        cout<<c<<endl;

    }
    return 0;
}