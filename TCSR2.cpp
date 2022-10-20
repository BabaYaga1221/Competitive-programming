#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int vowel(std::string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E')
        {
            sum++;
        }
    }
    return sum;
}
void solve()
{
    std::vector<string>ouch = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    std::vector<pair<int,string>>area;
    std::vector<pair<string,int>>elemenets;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string areaa;
        int a;
        cin>>a>>areaa;
        area.push_back({a,areaa});
    }
    for(int i=0;i<n;i++)
    {
        string elem;
        cin>>elem;
        if(elem=="Happy")
            elemenets.push_back({elem,10});
        else if(elem=="Sad")
            elemenets.push_back({elem,5});
        else if(elem=="Neutral")
            elemenets.push_back({elem,2});
        else
            elemenets.push_back({elem,1});
    }
    // for(int i=0;i<n;i++)
    //     cout<<area[i].first<<" "<<area[i].second<<endl;
    int sum=0,vol=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+((area[i].first)*(elemenets[i].second));
        vol=vol+(area[i].first)*vowel(area[i].second);
    }
    int prime=sum/vol;
    if(is_prime(prime)==true)
    {
        cout<<"YES ";
        while(prime>0)
        {
            int z=prime%10;
            for(int i=0;i<11;i++)
            {
                if(i==z)
                {
                    cout<<ouch[i]<<" ";
                }
            }
            prime=prime/10;
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO ";
        while(prime>0)
        {
           int z=prime%10;
            for(int i=0;i<11;i++)
            {
                if(i==z)
                {
                    cout<<ouch[i]<<" ";
                }
            }
            prime=prime/10;
        }
        cout<<endl; 
    }
}
int main()
{
    solve();
    return 0;
}
