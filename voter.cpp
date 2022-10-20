#include<iostream>
#include<vector>
#include<array>
#include<deque>
#include<algorithm>
std::array<long,100000>list;
long z=0;
void input(std::vector<long>&v,long n)
{
    int q;
    for(long i=0;i<n;i++)
    {
        std::cin>>q;
        v[i]=q;
    }
}
void algo(std::vector<long>&r1,std::vector<long>&r2,std::vector<long>&r3, long n)
{
    for(long i=0;i<n;i++)
    {
        if(std::binary_search(r2.begin(),r2.end(),r1[i])==true || std::binary_search(r3.begin(),r3.end(),r1[i])==true)
        {
            list[z]=r1[i];
            z++;
        }
    }
}
// void show(std::vector<long>&t,long n)
// {
//     for(long i=0;i<n;i++)
//         std::cout<<t[i]<<" ";
//     std::cout<<std::endl;
// }
using namespace std;
int main()
{
    int a[3];
    long q,c=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    std::vector<long>l1(a[0]);
    std::vector<long>l2(a[1]);
    std::vector<long>l3(a[2]);
    input(l1,a[0]);
    input(l2,a[1]);
    input(l3,a[2]);
    // show(l1,a[0]);
    // show(l2,a[1]);
    // show(l3,a[2]);
    algo(l1,l2,l3,a[0]);
    algo(l2,l1,l3,a[1]);
    algo(l3,l1,l2,a[2]);
    // std::unique(list.begin(),list.end());
    // cout<<list.size()<<endl;
    sort(list.begin(),list.end());
    unique(list.begin(),list.end());
    for(int i=1;i<list.size();i++)
    {
        if(list[i]!=0)
            c++;
        else if(list[i]==0)
            break;
    }
    cout<<c<<endl;
    for(int i=1;i<list.size();i++)
    {
        if(list[i]==0)
            return 0;
        else 
            cout<<list[i]<<endl;
    }
        

    return 0;
}