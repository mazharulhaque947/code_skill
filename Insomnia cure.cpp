#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k,l,m,n,o,p,d;
    cin>>k>>l>>m>>n>>d;
    vector<int>a(d);

    for(i=k-1;i<d;i+=k){ a[i]=1; }
    for(i=l-1;i<d;i+=l){ a[i]=1; }
    for(i=m-1;i<d;i+=m){ a[i]=1; }
    for(i=n-1;i<d;i+=n){ a[i]=1; }
    o=0;
    for(i=0;i<d;i++){ o=o+a[i]; }
    cout<<o<<"\n";
    return 0;
}

