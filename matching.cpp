#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(t>0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i++])
            {
                string tp=a[i];
                a[i]=a[i++];
                a[i++]=tp;
            }
        }
        t--;
    }
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<endl;
      }
      return 0;
}