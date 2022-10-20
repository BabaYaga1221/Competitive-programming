#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    std::vector<long long>v(n+1);
    for(int i=0;i<n;i++)
        cin>>v[i];
    long long r=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]!=r)
        {
            if(v[i]>r)
            {
                if((v[i]-r)%2!=0)
                    c++;
            }
            else 
            {
                if((r-v[i])%2!=0)
                    c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}