//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    bool p=true;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(i==s.length()-1)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n')
            {
                    p=false;
                    break;
            }
            else if(s[i]=='n')
                continue;
            else if(s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u')
                continue;
        }
        else if(s[i]=='n')
            continue;
        else if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
                continue;
            else
            {
                p=false;
                break;
            }
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            continue;
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
int main()
{
    solve();
    return 0;
}