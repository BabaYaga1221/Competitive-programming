#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=n;
        for(int i=9;i>=1;i++)
        {
            if(c>9)
            {
                c=c-9;
            }
        }
    }
}