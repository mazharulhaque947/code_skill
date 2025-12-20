#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a[100],i,j,k,l,o,p,m,n,t,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        m=0;
        o=0;
        p=-1;
        k=1;
        for(i=0;i<n;i++){ cin>>a[i];if(a[i]!=a[0]){ k=0; } if(a[i]>a[m]){l=m; m=i;} if(a[m]==a[i]){m=i;o++;} else{ o=1; p=l; m=i; } }
        p=0;
       if(k==0) {for(i=0;i<n;i++){ if(a[i]<a[m]&&a[i]>a[p]){ p=i; } }



       }
       else{



       }
       cout<<a[m]<<" "<<o<<" "<< ((p==-1)?-1:a[p])<<"\n";


    }

    return 0;
}
