//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    vector<int>vec1;
    vector<int>vec2;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vec1.push_back(a[0]);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            vec2.push_back(a[i]);
        else
            vec1.push_back(a[i]);
    }
    long int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        s1+=vec1[i];
        s2+=vec2[i];
    }
    if(s1==s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}