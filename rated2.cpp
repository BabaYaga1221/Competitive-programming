#include<bits/stdc++.h>

using namespace std;
bool prime(int n)
{
    int c=1;
    for(int i=2;i<=n;i++)
        if(n%i==0)
        {
            c++;
        }
    if(c==2)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(prime(n)==true)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
        else if(n%2==0)
        {
            for(int i=1,q=n;i<=n;i++,q--)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==j || j==q)
                        cout<<1<<" ";
                    else 
                        cout<<0<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=1,q=n;i<=n;i++,q--)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==1 || i==n)
                    {
                        if(j==1 || j==n || j==(n/2)+1)
                            cout<<1<<" ";
                        else
                            cout<<0<<" ";
                    }
                    else if(i==(n/2)+1)
                    {
                        if(j==1 || j==n || j==i)
                            cout<<1<<" ";
                        else 
                        cout<<0<<" ";
                    }
                    else if(j==i || j==q)
                        cout<<1<<" ";
                    else 
                    cout<<0<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}