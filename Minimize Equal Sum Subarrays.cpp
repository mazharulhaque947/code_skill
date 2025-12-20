#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i,k,a[200];
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){  cin>>a[i];  }
for(i=0;i<n;i++){  cout<<a[(i+1)%n]<<" ";  }
cout<<"\n";
}
return 0;
}
