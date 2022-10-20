//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s,b;
    cin>>b;
    cin>>s;
    int q[s.length()]={0};
    int sum=0;
    if(s.length()==1)
        cout<<0<<endl;
    else
    {
        int z=0,l=0;
        while(true)
        {
            char a=s[z];
            for(int i=0;i<b.length();i++) 
            {
                if(b[i]==a)
                {
                    q[l]=i+1;
                    l++;
                    break;
                }
            }
            z++;
        }
        for(int i=0;i<s.length()-1;i++)
        {
            sum=sum+abs(q[i]-q[i+1]);
        }
        cout<<sum<<endl;
    }
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