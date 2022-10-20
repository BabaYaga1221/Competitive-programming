#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
            cout<<0;
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
                i++;
            }
            else if(s[i+1]=='-')
            {
                cout<<2;
                i++;
            }
        }
    }
    cout<<endl;
    return 0;
}