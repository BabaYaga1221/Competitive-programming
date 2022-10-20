#include<iostream>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n,c0,c1,h,c=0,total=0;
    cin>>n>>c0>>c1>>h;
    string a[n];
    cin>>a[n];
    if(c0>c1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]=="0")
            {
                c++;
            }
        }
        total=(c1*n)+(c*h);
        cout<<total<<endl;
    }
    else if(c1>c0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]=="1")
            {
                c++;
            }
        }
        total=(c0*n)+(c*h);
        cout<<total<<endl;
    }
    else
        {
            cout<<n<<endl;
        
}
    return 0;
}