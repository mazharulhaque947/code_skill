#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string a;
    int i,j,m,n,t;
    cin>>n>>t;
    cin>>a;
    for(j=0;j<t;j++){

        for(i=0;i<n-1;i++){

            if(a[i]=='B'&&a[i+1]=='G'){  swap(a[i],a[i+1]); i=i+1;}


        }
    }
    cout<<a<<"\n";

    return 0;
}
