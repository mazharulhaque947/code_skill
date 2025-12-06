#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,m,n,a[100],b[100];
    cin>>t;
    while(t--)
    {

        cin>>n;

        if(m=n/2,n%2==1|| m%2==1 ){ cout<<"NO\n"; }
        else{

            cout<<"YES\n";
            k=0;
            j=m*2;

            for(i=0;i<m;i++){  if(i%2==0){ a[2*k]=i; a[2*k+1]=j-i; }
                               else{ b[2*k]=i; b[2*k+1]=j-i; k++;     }

            }

            for(i=0;i<m;i++){ cout<<a[i]+2<<" "; }
            for(i=0;i<m;i++){ cout<<b[i]+2<<" "; }
             cout<<"\n";

        }


    }

    return 0;
}
