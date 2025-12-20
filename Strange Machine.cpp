#include<bits/stdc++.h>
using namespace std;
int main()
{
string b;
int s,t,i,j,o,p,n,m,v;
cin>>t;
while(t--)
{
cin>>n>>p;
cin>>b;
m=0;
for(i=0;i<n;i++){   if(b[i]=='B'){ m=1; break;  } }
while(p--)
{
cin>>o;
v=0;
if(m==0){  cout<<o<<"\n"; }
else{
while(o>0){ if(b[v%n]=='B'){ o=o/2;  }else{o--;} v++; }
cout<<v<<"\n";
   }


}

}

return 0;
}

