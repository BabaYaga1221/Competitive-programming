//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,c=0;
    cin>>n>>k;
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    string s="abcdefghijklmnopqrstuvwxyz";
    int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    sort(v.begin(),v.end());
    while(k--)
    {
        for(int j=0;j<26;j++)
        {
        for(int i=0;i<n;)
        {
            if(v[i]==s[j])
            {
                c=c+a[i];
                i=i+2;
            }
            else
            {
                i=i+1;
            }
        }
        }
    }
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