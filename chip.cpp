//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int q;
cin>>q;
while(q--)
{
    string s,t;
    cin>>s;
    cin>>t;
    int s1=s.length();
    int t1=t.length();
    int p=0,c=0;
    for(int i=0;i<s1;i++)
    {
        if(t[0]==s[i])
        {
            p=i;
            c=1;
            break;
        }
    }
    if(c==0)
        cout<<"NO"<<endl;
    else
    {
    for(int i=1;i<t1;i++)
    {
        if(t[i]==s[p+1] && p==0)
        {
            c++;
            p++;
        }
        else if(t[i]==s[p-1] && p==s1)
        {
            c++;
            p--;
        }
        else if(t[i]==s[p+1])
        {
            c++;
            p++;
        }
        else if(t[i]==s[p-1])
        {
            c++;
            p--;
        }
    }
    if(c==t1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
    return 0;
}