#include<stdio.h>

int main()
{int n,t,i,j;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
long long h, a[n];
h=0;
for(i=0;i<n;i++)
{scanf("%lld",&a[i]); h=h+a[i]; }
h=h-2*a[n-2];
printf("%lld\n",h);

}
return 0;
}
