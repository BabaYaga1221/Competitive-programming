#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int c=1;
        if(n%2!=0)
        {
            for(int i=1;i<=n/2;i++)
                {
                    int s=0;
                    for(int j=i;j<n;j++)
                        {
                            if(s>n)
                                break;
                            else if(s==n)
                                {
                                    c++;
                                    break;
                                }
                            else
                                s=s+j;
                        }
                }    
        }
        else
        {
           for(int i=1;i<=n/2;i++)
                {
                    int s=0;
                    for(int j=i;j<n;j++)
                        {
                            if(s>n)
                                break;
                            else if(s==n)
                                {
                                    c++;
                                    break;
                                }
                            else
                                s=s+j;
                        }
                }     
        }
          cout<<c<<endl; 
            
        
    }
    return 0;
}