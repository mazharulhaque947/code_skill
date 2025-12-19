#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,m,n,o,p,t;
    vector<int>a;

    cin>>t;
    while(t--)
    {
        cin>>n;
        a.clear();
        for(i=0;i<n;i++){ cin>>o; a.push_back(o); }

        for(i=0;i<n;i++){ if(a[i]==1){ p=i; break;} }
        for(i=n-1;i>=0;i--){ if(a[i]==1){ o=i; break;} }
        m=0;
       //cout<<p<<" "<<o<<" ";
        for(i=p;i<=o;i++){ if(a[i]==0){ m++;} }
        cout<<m<<"\n";
    }


    return 0;
}
