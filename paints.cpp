#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n,c=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int size=sizeof(a)/sizeof(a[0]);
vector<int>vec(a,a+n);
vector<int>vec2;
int at[4]={2,3,5,7};
for(int i=0;i<n;i++)
{
    for(int j=0;j<4;j++)
    {
        if(vec2[j]!=j)
            {
                if(vec[i]%at[j]==0)
                    {
                        vec2.push_back(j);
                        break;
                    }
            }
    }
}
cout<<(int)vec2.size()<<endl;
return 0;
}