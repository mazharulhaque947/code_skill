#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,i,j,r;

    cin>>k>>r;
    i=1;
    for( ;1;i++){

        if((i*k-r)%10==0||(i*k)%10==0){ break; }

    }
    cout<<i<<"\n";

    return 0;
}
