//bismillahi rehmanir-raheem
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0;
    cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    if(n==1)
    {    cout<<v[0]<<endl;
        cout<<0<<endl;
    }
    else if(n%2==0)
    {
    int a1[n/2]={0};
    int a2[n/2]={0};
    for(int i=0,a=0,b=0;i<n;i++)
    {
        if(i%2==0)
        {
            a1[a]=v[i];
            a++;
        }
        else
        {
            a2[b]=v[i];
            b++;
        }
    }
    sort(a1,a1+n/2,greater<int>());
    sort(a2,a2+n/2,greater<int>());
    for(int i=0;i<(n/2);i++)
    {
        for(int j=i;j<n/2;j++)
        {
            sum=sum+(a1[i]*a2[j]);
        }
    }
    for(int i=0,a=0,b=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<a1[a]<<" ";
            a++;
        }
        else
        {
            cout<<a2[b]<<" ";
            b++;
        }
    }
    cout<<endl;
    cout<<sum<<endl;
    }
    else{
    int a1[(n/2)+1]={0};
    int a2[n/2]={0};
    for(int i=0,a=0,b=0;i<n;i++)
    {
        if(i%2==0)
        {
            a1[a]=v[i];
            a++;
        }
        else
        {
            a2[b]=v[i];
            b++;
        }
    }
    sort(a1,a1+(n/2)+1,greater<int>());
    sort(a2,a2+n/2,greater<int>());
    for(int i=0;i<(n/2);i++)
    {
        for(int j=i;j<n/2;j++)
        {
            sum=sum+(a1[i]*a2[j]);
        }
    }
    for(int i=0,a=0,b=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<a1[a]<<" ";
            a++;
        }
        else
        {
            cout<<a2[b]<<" ";
            b++;
        }
    }
    cout<<endl;
    cout<<sum<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}