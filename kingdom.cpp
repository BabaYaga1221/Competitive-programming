//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool grater(int a,int b){
    return a>b;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        std::vector<int>v;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
            sum+=v[i];
        if(sum!=0)
        {
            
            cout<<"YES"<<endl;
            if(sum>0)
            {
                sort(v.begin(),v.end(),grater);
                for(int i=n-1;i>=0;i--)
                    cout<<v[i]<<" ";
            }
            else if(sum<0)
            {
                sort(v.begin(),v.end());
                for(int i=0;i<n;i++)
                    cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(sum==0)
            cout<<"NO"<<endl;
    }
    return 0;
}