//bismillahi rehmanir-raheem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int N)
{
    int f=1;
    for(int i=1;i<=N;i++)
        f=f*i;
    return f;
}
int big(int A,int N)
{
    int L;
    if(N==0 && A!=0)
        return 1;
    else if(N==1 && A!=0)
        return A;
    else
    {
        for(int i=2;i<=N;i++)
            L=A*A;
    }
    return L;
}

int main()
{
int t;
cin>>t;
int i=1;
while(t--)
{
    int A,N,P;
    cin>>A>>N>>P;
    N=fact(N);
    A=big(A,N);
    P=A%P;
    cout<<"Case"<<"#"<<i<<":"<<" "<<P<<endl;
    i++;
}
    return 0;
}