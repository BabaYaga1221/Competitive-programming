//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int q;
// bool div(int n)
// {
//     bool p=false;
//     for(int i=n-1;i>=2;i--)
//     {
//         if(n%i==0)
//         {
//             p=true;
//             q=i;
//             break;
//         }
//     }
//     if(p==true)
//         return true;
//     else 
//         return false;
// }
int main() 
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    if (n <= 3) {
      ans = n - 1;
    } else if (n % 2 == 0) {
      ans = 2;
    } else {
      ans = 3;
    }
    cout << ans << endl;
  }
  return 0;
}