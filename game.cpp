#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string a;
        cin>>a;
        int r=a.length();
        for(int i=0;i<r;i++)
        {
            if(i%2==0)
            {
                if(a[i]>'a')
                    a[i]='a';
                else
                    a[i]='b';
            }
            else
            {
                if(a[i]<'z')
                    a[i]='z';
                else
                    a[i]='y';
            }
        }
        cout<<a<<endl;
        t--;

    }
    return 0;
}