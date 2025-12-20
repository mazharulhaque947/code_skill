#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[200],i,j,k,l,o,p,m,n,x,y,u,v,s,t,q,c;
    char b[201];
    cin>>t;
    while(t--)
    {

        cin>>n>>m>>k;
        cin>>b;
        l=0;
        y=0;
        x=b[0]-48;
        for(i=0;i<n;i++){

            q=b[i]-48;
            if(q==x){y++; }
            else{a[l]=y; y=1; l++;x=q; }
            if(i==n-1){ a[l]=y; l++;  }

        }
        i=0;
        if(b[0]==49){i++; }
        x=0;
        for(;i<l;){
           s=c=0;
           if(a[i]<m){ s=0; }
            else{
                s=1;
                while(1){

                    if(s*(m-1+k)<=a[i]&&s*(m-1+k)+m-1>=a[i]){break; }
                    else if( s*(m-1+k)>a[i] ){ break; }
                    s++;
                }

            }
             if(a[i]<m){ s=0; }
            else if(s*(m-1+k)<=a[i]){x+=s;}
            else{

                x+=s;

                v=s*(m-1+k)-a[i];
                c=0;
                while(v>0&&i+2*c+2<l){
                    if(a[i+2*c+1]>=v){v=0;}
                    else{  v-=a[i+2*c+1]; }

                    if(v>0){
                        if( a[i+2*c+2]>v ){  a[i+2*c+2]-=v; v=0;}
                        else{ v-=a[i+2*c+2] ;  a[i+2*c+2]=0; c++;}

                    }

                }

            }



         i=i+2*c+2;
        }




        cout<<x<<"\n";

    }





    return 0;
}
