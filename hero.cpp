//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;
void input(std::vector<long>&v,long long int &n)
{
    for(int i=0;i<n;i++)
        std::cin>>v[i];
}
void solve()
{
    long long int A,B,n,S1=0,S2=0,c=0;
    std::cin>>A>>B>>n;
    std::vector<long>a(n);
    std::vector<long>h(n);
    input(a,n);
    input(h,n);
    for(int i=0;i<n;i++)
    {
        if(B<=a[i] || A<=h[i])
        {
            if(A>=h[i])
            {
                c++;
                B=B-a[i];
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        else
        {
            c++;
            B=B-a[i];
        }
    }
    if(c==n)
        cout<<"YES"<<endl;

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