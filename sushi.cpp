//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=0;
    cin>>n;
    int a[n]={0},t=0;
    std::vector<int>v(n);
    for(long i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(v[i]==1)
            {
                c++;
                a[t]=2*c;
                t++;
            }
        }
        if(v[i]==v[i+1] && v[i]==1)
        {
            c++;
        }
        else
        {
            if(c==0){
            a[t]=2*c;
            t++;
            c=0;
            }
            else{
                a[t]=2*c+2;
                t++;
                c=0;
            }
        }
    }
    if(*std::max_element(a,a+n)==0)
        cout<<2<<endl;
    else
        cout<<*std::max_element(a,a+n)<<endl;
    
}
int main()
{
    solve();
    return 0;
}