//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
    int s1=0,s2=0;
    int p1[n];
    int p2[n];
    int L[n];
    int player[n];
    for(int i=0;i<n;i++)
        cin>>p1[i]>>p2[i];
    for(int i=0;i<n;i++)
    {
        s1+=p1[i];
        s2+=p2[i];
        if(s1>s2)
        {
            L[i]=s1-s2;
            player[i]=1;
        }
        else if(s2>s1)
        {
            L[i]=s2-s1;
            player[i]=2;
        }
    }
    int val=0,play=0;
    for(int i=0;i<n;i++)
    {
        if(val<=L[i])
        {
            val=L[i];
            play=player[i];
        }
    }
    cout<<play<<" "<<val<<endl;

    return 0;
}