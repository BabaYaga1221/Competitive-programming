#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=6;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(s[i]=='?' && s[i+1]!='a')
                s[i]='a';
            else if(s[i]=='?' && s[i+1]!='b')
                s[i]='b';
            else if(s[i]=='?' && s[i+1]=='?')
                s[i]='a';
        }
        else if(i==n-1)
        {
            if(s[i]=='?' && s[i-1]!='b')
                s[i]='a';
            else if(s[i]=='?' && s[i-1]!='a')
                s[i]='b';
        }
        else
        {
            if(s[i]=='?' && s[i-1]=='a' && s[i+1]=='a')
                s[i]='b';
            else if(s[i]=='?' && s[i-1]=='a' && s[i+1]=='?')
                s[i]='b';
            else if(s[i]=='?' && s[i-1]=='b' && s[i+1]=='b')
                s[i]='a';
            else if(s[i]=='?' && s[i-1]=='a' && s[i+1]=='b')
                s[i]='a';
            else if(s[i]=='?' && s[i-1]=='b' && s[i+1]=='a')
                s[i]='b';
             else if(s[i]=='?' && s[i-1]=='b' && s[i+1]=='?')
                s[i]='a';
        }
        // if(i==0 && s[i]=='?' && s[i+1]!='a')
        // {
        //     s[i]='a';
        // }
        // else if(i==0 && s[i]=='?' && s[i+1]!='b')
        // {
        //     s[i]='b';
        // }
        // else if(i==n-1 && s[i]=='?' && s[i-1]!='b')
        // {
        //     s[i]='a';
        // }
        // else if(i=n-1 && s[i]=='?' && s[i-1]!='a')
        // {
        //     s[i]='b';
        // }
        // else if(s[i]=='?' && s[i-1]=='a' && s[i+1]=='a')
        // {
        //     s[i]='b';
        // } 
        // else if(s[i]=='?' && s[i-1]=='a' && s[i+1]=='?')
        // {
        //     s[i]='b';
        // }
        // else if(s[i]=='?' && s[i]=='-1b' && s[i+1]=='b')
        // {
        //     s[i]='a';
        // }
        // else if(s[i]=='?' && s[i-1]=='b' && s[i+1]=='?')
        // {
        //     s[i]='a';
        // }
        // else if(i=0 && s[i]=='?' && s[i]=='?')
        // {
        //     s[i]='a';
        // }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}