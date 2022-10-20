#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,s,ele,ete;
    cin>>n>>s;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++) {
        // Vector to store column elements
        cin>>ele;
        vector<int> v1;
  
        for (int j = 0; j < ele ; j++) {
            cin>>ete;
            v1.push_back(ete);
        }
  
        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }
  
    int a[s][2];
    for(int i=0;i<s;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<s;i++)
    {
        cout<<vec[a[i][0]][a[i][1]]<<endl;
    }
    
    return 0;
}
