#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
	cin>>n;
	std::vector<string>v;
	std::map<string,int>mp;
	string x;
	for(int i=0;i<n;i++)
    {
		cin>>x;
		v.push_back(x);
		mp[x]++;
	}
	for(int i=n-1;i>=0;i--){
		if(mp[v[i]]==1)
            v[i]="OK";
		else 
        {
			mp[v[i]]--;
			v[i]=v[i]+to_string(mp[v[i]]);
		}
	}
	for(int i=0;i<n;i++)
        cout<<v[i]<<endl;
}
int main()
{
    solve();
    return 0;
}