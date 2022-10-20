//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0,p=0,x;
    cin>>n;
    std::vector<int>v(n);
    std::vector<int>b(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]!=b[i])
        {
          // p=abs(v[i]-b[i]);
           if(b[i]>v[i])
           {
            x=b[i]-v[i]
            break;
           }
        }
           /*else if(p!=abs(v[i+1]-b[i+1]))
            {
               c++;
               break;
            } 
        }
        else
            c++;*/
    }
    if(==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}