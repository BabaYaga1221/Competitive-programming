#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int a,b,c=0,ans=0,q=0;
        bool f=false;
        cin>>a>>b;
        char bw[a][b];
        int z[a]={0};
        for(int i=0;i<a;i++)
        {
                for(int j=0;j<b;j++)
                        cin>>bw[i][j];
        }
        for(int i=b-1;i>=0;i--)
        {
                for(int j=0;j<a;j++)
                {
                        if(bw[j][i]=='#')
                        {
                                // cout<<bw[j][i]<<" ";
                                f=true;
                                z[q]=j;
                                q++;
                        }
                }
                if(f==true)
                        break;
        }
        for(int i=0;i<b;i++)
        {
                for(int j=0;j<a;j++)
                {
                        if(bw[j][i]=='#')
                        {
                                // cout<<bw[j][i]<<" ";
                                f=true;
                                z[q]=j;
                                q++;
                        }
                }
                if(f==true)
                        break;
        }
        for(int i=0;i<a;i++)
        {
                for(int j=0;j<b;j++)
                {
                        // cout<<z[i]<<" ";
                        if(bw[z[i]][j]=='#')
                                c++;
                }
                ans=max(ans,c);
                c=0;
        }
        cout<<ans<<endl;
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