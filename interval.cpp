//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int t,j=1;
cin>>t;
while(t--)
{
    int n,c,w=0;
    cin>>n>>c;
    int l[n],r[n];
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    for(int i=0;i<n;i++)
    {
        w=w+(r[i]-l[i]);
    }
    if(n-c!=0)
        w=w-c;
    cout<<"Case#"<<j<<": "<<w<<endl;
    j++;
}
    return 0;
}