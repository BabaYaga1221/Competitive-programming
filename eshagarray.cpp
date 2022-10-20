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
    int n,ele;
    cin>>n;
   std::vector<int>vec(0,n);
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        vec.push_back(ele);
    }
    sort(vec.begin(),vec.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        int avg=(vec[i]+vec[i+1])/2;
        if(vec[i]>avg)
        {
            vec.erase(vec.begin()+i);
            c++;
            n--;
        }
        else if(vec[i+1]>avg)
        {
            vec.erase(vec.begin()+(i+1));
            c++;
            n--;
        }
        else if(vec[i]>avg && vec[i+1]>avg)
        {
            vec.erase(vec.begin()+i);
            vec.erase(vec.begin()+(i+1));
            c+=2;
            n-=2;
        }
    }
    cout<<c<<endl;
}
    return 0;
}