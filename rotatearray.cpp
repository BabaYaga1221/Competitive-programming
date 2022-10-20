#include<iostream>
using namespace std;
void rotate(int a[10])
{
    int x=a[10-1];
    for(int i=10-1;i>0;i--)
        a[i]=a[i-1];
    a[0]=x;

}
void print(int arr[10])
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<"before rotating"<<endl;
    print(a);
    rotate(a);
    cout<<" after rotating"<<endl;
    print(a);
    return 0;
}