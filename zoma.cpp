#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,L=0,R=0;
    cin>>t;
    string s;
    cin>>s;
    
    for(int i=0;i<t;i++)
        {
            char ch=s[i];
            if(ch =='L')
                L++;
            else
                R++;
        }
    cout<<L+R+1<<endl;
    return 0;
}