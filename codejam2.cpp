#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int k=1;
void solve()
{
    long n;
    cin>>n;
    std::vector<long>d(n);
    for(int i=0;i<n;i++)
        cin>>d[i];
    sort(d.begin(),d.end());
    long c=0;
    for(int i=0,j=1;i<n;i++)
    {
        if(d[i]>=j)
        {
            j++;
            c++;
        }
        else 
            continue;
    }
    cout<<"Case #"<<k<<": "<<c<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        k++;
    } 
    return 0;
}