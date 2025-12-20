#include<bits/stdc++.h>

using namespace std;
int po(int a){
int m,i,k;

m=1;
while(a--){ m=m*2;  }

return m;}
int main()
{
    int t,k,m,n,o,p;
    cin>>t;
    while(t--){
        cin>>k>>n;
        k=po(k);
        cout<<n*k<<"\n";


    }

    return 0;
}
