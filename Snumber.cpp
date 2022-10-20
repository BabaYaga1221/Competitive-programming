#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int q,z=1;
    cin>>q;
    if(q==1 || q==2)
        cout<<q<<endl;
    else
    {
    while(q--)
    {
        if(z%3==0 || (z>9 && z%10==3))
        {
            z++;
            q++;
        }
        else
            z++;
    }
    cout<<q+z<<endl;
    }
    }
    return 0;
}