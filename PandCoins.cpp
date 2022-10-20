//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.length();
    char r[n/2];
    char g[n/2];
    int c=0,R=0,G=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    if(n==1)
        cout<<0<<endl;
    else if(n==c+1)
        cout<<1<<endl;
    else if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            r[i]=s[i];
            g[i]=s[i+1];
        }
        for(int i=0;i<n/2;i++)
        {
            for(int j=i+1;j<n/2;j++)
            {
                if(r[i]==r[j] && g[i]==g[j])
                {
                    R++;
                    G++;
                }
                else if(r[i]==r[j])
                    R++;
                else if(g[i]==g[j])
                    G++;
            }
        }
        if(R>G)
            cout<<n/2<<endl;
        else 
            cout<<n/2<<endl;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            r[i]=s[i];
            g[i]=s[i+1];
        }
        for(int i=0;i<(n-1)/2;i++)
        {
            for(int j=i+1;j<(n-1)/2;j++)
            {
                if(r[i]==r[j] && g[i]==g[j])
                {
                    R++;
                    G++;
                }
                else if(r[i]==r[j])
                    R++;
                else if(g[i]==g[j])
                    G++;
            }
        }
        if(R>G)
            cout<<(n-1)/2<<endl;
        else 
            cout<<(n-1)/2<<endl;
    }

}
    return 0;
}