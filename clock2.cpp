//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s=0;
    cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(i!=n-1 && v[i]!='0')
        {
            switch(v[i])
            {
                case '1':
                    s=s+2;
                    break;
                case '2':
                    s=s+3;
                    break;
                case '3':
                    s=s+4;
                    break;
                case '4':
                    s=s+5;
                    break;
                case '5':
                    s=s+6;
                    break;
                case '6':
                    s=s+7;
                    break;
                case '7':
                    s=s+8;
                    break;
                case '8':
                    s=s+9;
                    break;
                case '9':
                    s=s+10;
                    break;
            }
        }
        else if(v[i]!='0')
        {
            switch(v[i])
            {
                case '1':
                    s=s+1;
                    break;
                case '2':
                    s=s+2;
                    break;
                case '3':
                    s=s+3;
                    break;
                case '4':
                    s=s+4;
                    break;
                case '5':
                    s=s+5;
                    break;
                case '6':
                    s=s+6;
                    break;
                case '7':
                    s=s+7;
                    break;
                case '8':
                    s=s+8;
                    break;
                case '9':
                    s=s+9;
                    break;
            }
        }
    }
    cout<<s<<endl;
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