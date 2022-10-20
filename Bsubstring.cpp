//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a=0,b=0,c=0,p=0,q=0;
    cin>>n;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(a>=1 && b>=1)
        {
            break;
        }
        else
        {
            if(v[i]=='a')
                a++,p=i;
            else if(v[i]=='b')
                b++,q=i;
        }
    }
    if(a==0 || b==0)
        cout<<-1<<" "<<-1<<endl;
    // else if(a==b && c==0)
    //    cout<<q<<" "<<n<<endl;
    else
    {
        if(p<q)
            cout<<p+1<<" "<<q+1<<endl;
        else
            cout<<q+1<<" "<<p+1<<endl;
    }
        // cout<<p+1<<" "<<q+1<<endl;
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