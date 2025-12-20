#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[101];
    int b,c,n,i,j,t,p,o;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n=strlen(a);
        b=0;
        o=0;
        for(i=n-1;i>=0;i--){ if(a[i]!='0'){o=i;break;}b++; }
        p=0;
        for(i=0;i<o;i++){ if(a[i]!='0'){p++;} }
        cout<<p+b<<"\n";

    }


    return 0;
}
