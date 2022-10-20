#include <bits/stdc++.h>
using namespace std;

/* Problem code = GCDPRF in codechef solution copied. */
bool checker(vector<long long int> b, int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        if(b[i]%b[i+1]!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <long long int> b;
        for(int i=0 ; i<n ; i++) {
            long long int temp;
            cin>>temp;
            b.push_back(temp);
        }
        if(checker(b, n)) {
            for(auto i:b){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
    
    return 0;
}