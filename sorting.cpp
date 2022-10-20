// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5]={5,1,4,9,10};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=i+1;j<5;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int tmp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=tmp;
//             }
//         }
//     }
//     // sort(arr,arr+4);
//     for(int i=0;i<5;i++)
//     {
//         int temp = arr[i];
//         arr[i]=arr[5-i];
//         arr[5-i]=temp;
//     }
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s.substr(s.length()-4,s.length());
}