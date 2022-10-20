    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        long n;
        cin>>n;
        std::vector<long>q;
        std::vector<long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==2)
            cout<<(v[0]&v[1])<<endl;
        else{
        long s=(v[0]&v[1])|(v[0]&v[2]);
        for(long i=0;i<n;i++)
        {
            for(long j=i+1;j<n;j++)
            {
                if(i==0 && (j==1 || j==2))
                    continue;
                long q=v[i]&v[j];
                s=s|q;
            }
        }
        cout<<s<<endl;
        }
    }   
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }