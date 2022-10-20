#include<iostream>
#include<string>
using namespace std;
string rev(string x)
{
    string p;
    for(int i=x.length()-1;i>0;i++)
    {
        p=x[i];
    }
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int s=a.length();
        for(int i=0;i<s+1;i++)
        {
            a.insert(i,"a");
            if(a.compare(rev(a)))
            {
                cout<<"YES"<<endl;
                cout<<a<<endl;
                break;
            }
            else
            {
                a.insert(i," ");
            }
        }
    }
    return 0;
}