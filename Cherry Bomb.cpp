#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i,k,j,o,p,m,n,l,v,c,q,s,u,a[200000],b[200000];
    cin>>t;
    while(t--){
        cin>>n>>k;
        o=p=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]>a[o]){o=i;} if(a[i]<a[p]){p=i;}  }
        v=l=c=0;
        for(i=0;i<n;i++){ cin>>b[i];
             if(b[i]!=-1){
                    c++;
                    if(l==0){l++; m=a[i]+b[i];}
                    else{ if(m!=a[i]+b[i]){v=1; } }          }

                    else{

                        if(l!=0&&a[i]>m){v=1;}

                    }


                     }

        if(v==1||(l!=0&&a[o]>m)){cout<<0<<"\n";}
        else if(c!=0){
            if(m-a[p]<=k){cout<<1<<"\n";}
            else{ cout<<0<<"\n"; }

        }
        else if(c==0){
             if(a[o]-a[p]>k){ cout<<0<<"\n";  }
             else{  cout<<k+1+a[p]-a[o]<<"\n";  }


        }

    }

    return 0;
}
