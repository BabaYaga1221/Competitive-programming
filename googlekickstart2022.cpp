    #include<bits/stdc++.h>
    using namespace std;
    long long k=1;

    void solve()
    {
        long long n,sum=0,temp=0,c=0;;
        cin>>n;
        temp=n;
        while(n>0)
        {
            int a=n%10;
            sum=sum+a;
            c++;
            n=n/10;
        }
        if(sum%9!=0 && c==1)
            cout<<"Case #"<<k<<": "<<(9*((temp/9)+1))-temp<<temp<<endl;
        else if(sum%9!=0 && c!=1)
            cout<<"Case #"<<k<<": "<<temp<<(9*((temp/9)+1))-temp<<endl;
        else
            cout<<"Case #"<<k<<": "<<temp<<endl;

    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
            k++;
        }
        return 0;
    }