//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=0,c=0;
    cin>>n;
    std::vector<int>v(n+1);
    int a[n/2][3];
    int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int q=0;q<n;q++)
            {
                if(j==0)
                {
                    if(v[q]==1 || v[q]==2 || v[q]==3)
                    {
                        a[i][j]=q+1;
                        a1[p]=v[q];
                        v[q]=0;
                        p++;
                        break;
                    }
                }
                else if(j==1)
                {
                    if((v[q]==1 && a1[p-1]!=1) || (v[q]==2 && a1[p-1]!=2) || (v[q]==3 && a1[p-1]!=3))
                    {
                        a[i][j]=q+1;
                        a1[p]=v[q];
                        v[q]=0;
                        p++;
                        break;
                    }
                }
                else
                {
                    if((v[q]==1 && a1[p-1]!=1 && a1[p-2]!=1) || (v[q]==2 && a1[p-1]!=2 && a1[p-2]!=2) || (v[q]==3 && a1[p-1]!=3 && a1[p-2]!=3))
                    {
                        a[i][j]=q+1;
                        a1[p]=v[q];
                        v[q]=0;
                        p++;
                        c++;
                        break;
                    }
                }
            }
        }
    }
    if(c==0)
        cout<<0<<endl;
    else
    {
        cout<<c<<endl;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    
    return 0;
}