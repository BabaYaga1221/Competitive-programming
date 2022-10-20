#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve()
{
  long n,c=0;
  cin>>n;
  std::vector<long>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(((v[i]|v[j])&5)%2!=0)
        c++;
    }
  }
  cout<<c<<endl;
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}