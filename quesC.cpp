#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int vec[n];
       for(int i=0;i<n;i++)
            vec[i]=i+1;
        if(n%2==0)
        {
            for(int i=0;i<n;i+=2)
                cout<<vec[i+1]<<" "<<vec[i]<<" ";
        }
        else if(n%2!=0)
        {
            cout<<"3 1 2 ";
            for(int i=3;i<n;i+=2)
                cout<<vec[i+1]<<" "<<vec[i]<<" ";
        }
        cout<<endl;
   }
   
   return 0;
}