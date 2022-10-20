//solution copied
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,n,t,c;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        cin>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            c++;
            else
            break;
        }
        if(c*2>n)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}