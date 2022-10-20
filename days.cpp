//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n;
    int c=0,p=0;
    cin>>n;
    std::vector<int>v(n);
    int a[n]={0};
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
            if(i==n-1)
            {
                if(v[0]==v[n-1] && v[0]==1)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(v[j]==1)
                            c++;
                        else
                        {
                            a[i]=c+1;
                            break;
                        }
                    }
                    break;
                }
                else if(v[i]==1)
                {
                    c++;
                    a[i]=c;
                }
            }
            else if(v[i]==v[i+1] && v[i]==1)
                c++;
            else 
            {
                if(c!=0)
                {
                    a[i]=c+1;
                    c=0;
                }
                else
                {
                    a[i]=c;
                    if(v[i]==1)
                        p++;
                }
            }
    }
    if(*std::max_element(a,a+n)==0 && p!=0)
        cout<<*std::max_element(a,a+n)+1<<endl;
    else
        cout<<*std::max_element(a,a+n)<<endl;
}
int main()
{
    solve();
    return 0;
}