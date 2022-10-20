//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    std::deque<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s=v[0],b=v[0],p1=0,p2=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>b)
            b=v[i],p1=i;
        else if(v[i]<s)
            s=v[i],p2=i;
    }
        if((p1==0 || p1==n-1) && (p2==0 || p2==n-1))
            cout<<2<<endl;
        else if((p1==0 || p1==n-1) && (p2==p1-1 || p1==p2-1))
            cout<<2<<endl;
        else if(abs(p1-0)<abs(p1-n-1))
        {
            // if(p1==p2-1 && p2>p1)
            //     cout<<abs(p1-0)+1<<endl;
            // else if(p2==p1-1 && p1>p2)
            //     cout<<abs(p1-0)<<endl;
             if(abs(p2-p1)<abs(p2-n-1))
                cout<<abs(p1-0)+abs(p2-p1)<<endl;
            else
                cout<<abs(p1-0)+abs(p2-n-1)<<endl;
        }
        else if(abs(p1-0)>abs(p1-n-1))
        {
            // if(p1==p2-1 && p2>p1)
            //     cout<<abs(p1-n-1)<<endl;
            // else if(p2==p1-1 && p1>p2)
            //     cout<<abs(p1-n-1)+1<<endl;
             if(abs(p2-p1)<abs(p2-0))
                cout<<abs(p2-p1)+abs(p1-n-1)<<endl;
            else 
                cout<<abs(p1-n-1)+abs(p2-0)<<endl;
        }
        else if(abs(p1-0)==abs(p1-n-1))
        {
            // if(p1==p2-1 && p2>p1)
            //     cout<<abs(p1-0)+1<<endl;
            // else if(p2==p1-1 && p1>p2)
            //     cout<<abs(p1-0)<<endl;
            if(abs(p2-p1)<abs(p2-0))
                cout<<abs(p2-p1)+abs(p1-n-1)<<endl;
            else
                cout<<abs(p2-p1)+abs(p1-0)<<endl;
        }
        
        
        
}
    return 0;
}