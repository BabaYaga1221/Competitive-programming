#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the value of 'n'"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(i=n;i>n;i--)
    {
        for(j=i;j>0;j++)
    }
}