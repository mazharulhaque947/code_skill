#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long a,b,o,k,n,p,l,q,t,i;

    cin>>t;
    while(t--)
    {

        cin>>a>>b;

        n=1;
        l=1;
        p=1000000000;

        while( p-l>=100 )
        {
            n=l+ (p-l)/2;
             // cout<<n<<"\n";
           if(n*b==a){ l=n; break; }
           else if(n*b>a){p=n; }
           else if( n*b<a ){ l=n; }

        }

        for(i=l;1;i++){

            if( i*b>=a  ){ break; }

        }
        b=b*i;
        o=0;

        if(  b%a!=0){ o=1;}
        cout<<b/a+o<<"\n";

    }

    return 0;
}
