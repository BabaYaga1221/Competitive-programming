//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n,c=1;
    cin>>n;
    std::vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        
        cin>>v[i];
        sort(v[i].begin(),v[i].end());
        //this part is copied form stackoverflow.
        std::set<char> chars;
        v[i].erase(std::remove_if(v[i].begin(),v[i].end(), [&chars] (char i) {
                if (chars.count(i)) { return true; }
                chars.insert(i);
                return false;}),
        v[i].end()
    );
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            continue;
        }
        else
            c++;
    }
    cout<<c<<endl;
}
int main()
{
    solve();
    return 0;
}