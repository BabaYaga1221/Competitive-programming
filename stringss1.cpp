//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    string b="abcdefghijklmnopqrstuvwxyz";
    int c=0,q=0;
    bool p=true;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' && n==1)
        {
            c=c+i;
            q++;
        }
        else if(s[i]=='a')
        {
            c=c+i;
            q++;
        }
    }
    if(q!=0)
    {
    int r=c,l=c;
    for(int i=1;i<n;i++)
    {
        
        if(s[r+1]==b[i])
        {
            r++;

        }
        else if(s[l-1]==b[i])
        {
            l--;
        }
        else
        {
            p=false;
            break;
        }
    }
    if(p==false)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
    return 0;
}