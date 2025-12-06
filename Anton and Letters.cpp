#include<bits/stdc++.h>

using namespace std;

int main()
{

    char a[1001];
    set<char>b;
    int i,j,k,m,n;
   scanf("%[^\n]",a);
   n=strlen(a);
   for(i=0;i<n;i++){ if(a[i]>=97&&a[i]<=122){ b.insert(a[i]); } }
   cout<<b.size()<<"\n";
    return 0;
}
