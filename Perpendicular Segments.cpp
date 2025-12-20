#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,k,x,y;
    cin>>t;

    while(t--){

       cin>>x>>y>>k;
       if(y<x){  x=y; }
       cout<<"0 0 "<<x<<" "<<x<<"\n";
       cout<<"0 "<<x<<" "<<x<<" 0\n";

    }
    return 0;
}
