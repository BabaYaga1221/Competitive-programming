//bismillahi rehmanir-raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,max1=0;
    cin>>n;
    std::vector<int>alpha(26,0);
    // for(int i=0;i<26;i++)
    //     cout<<alpha[i]<<" ";
    std::vector<char>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        char ch=v[i];
        switch(ch)
        {
            case 'A':
            {
                alpha[1]++;
                break;
            }
            case 'B':
            {
                alpha[2]++;
                break;
            }
            case 'C':
            {
                alpha[3]++;
                break;
            }
            case 'D':
            {
                alpha[4]++;
                break;
            }
            case 'E':
            {
                alpha[5]++;
                break;
            }
            case 'F':
            {
                alpha[6]++;
                break;
            }
            case 'G':
            {
                alpha[7]++;
                break;
            }
            case 'H':
            {
                alpha[8]++;
                break;
            }
            case 'I':
            {
                alpha[9]++;
                break;
            }
            case 'J':
            {
                alpha[10]++;
                break;
            }
            case 'K':
            {
                alpha[11]++;
                break;
            }
            case 'L':
            {
                alpha[12]++;
                break;
            }
            case 'M':
            {
                alpha[13]++;
                break;
            }
            case 'N':
            {
                alpha[14]++;
                break;
            }
            case 'O':
            {
                alpha[15]++;
                break;
            }
            case 'P':
            {
                alpha[16]++;
                break;
            }
            case 'Q':
            {
                alpha[17]++;
                break;
            }
            case 'R':
            {
                alpha[18]++;
                break;
            }
            case 'S':
            {
                alpha[19]++;
                break;
            }
            case 'T':
            {
                alpha[20]++;
                break;
            }
            case 'U':
            {
                alpha[21]++;
                break;
            }
            case 'V':
            {
                alpha[22]++;
                break;
            }
            case 'W':
            {
                alpha[23]++;
                break;
            }
            case 'X':
            {
                alpha[24]++;
                break;
            }
            case 'Y':
            {
                alpha[25]++;
                break;
            }
            case 'Z':
            {
                alpha[26]++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max<alpha[i])
            max=i+1;
    }
    for(int i=0;i<n;i++)
    {
        if(alpha[i]==max-1)
        {
            max1=i+1;
            break;
        }
    }
    for(int i=0;i<26;i++)
    {
        if()
    }
    cout<<endl;
    return 0;
}