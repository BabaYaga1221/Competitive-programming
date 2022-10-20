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
        int n,ele;
        cin>>n;
        std::vector<int>vec(0,n);
        std::vector<int>A;
        std::vector<int>B;
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            vec.push_back(ele);
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]%2==0)
                B.push_back(vec[i]);
            else
                A.push_back(vec[i]);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end(),greater<>());
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<0)
            {
                if(-vec[i]%2==0)
            {
                cout<<B[b]<<" ";
                b++;
            }
            else if(-vec[i]%2!=0)
            {
                cout<<A[a]<<" ";
                a++;
            }
            }
            else{
            if(vec[i]%2==0)
            {
                cout<<B[b]<<" ";
                b++;
            }
            else
            {
                cout<<A[a]<<" ";
                a++;
            }
            }
        }
        cout<<endl;
    }
    return 0;
}