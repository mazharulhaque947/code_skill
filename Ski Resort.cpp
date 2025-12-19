    #include<bits/stdc++.h>
    using namespace std;
    long long cc(long long n,long long k)
    {
    if(n>=k){  n=n-(k-1); n=(n*(n+1))/2; }
    else{ n=0;}
    return n;
    }
    int main()
    {
    int i,j,k,n,m,t,q,a[200000],b[200];
    long long s;
    cin>>t;
    while(t--)
    {
    cin>>n>>k>>q;
    s=0;
    m=0;
    for(i=0;i<n;i++){cin>>a[i];
    if(a[i]<=q){m++;}
    else{ s=s+cc(m,k); m=0;    }
    if(i==n-1){  s=s+cc(m,k); }

       }

    cout<<s<<"\n";
    }

    return 0;
    }
