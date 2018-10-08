#include <stdio.h>
int main()
{
    long long unsigned int i,n,q=0,l,s;
long long unsigned int a[10000];
scanf("%llu",&n);
printf("\n");
for(i=0;i<n;++i)
scanf("%llu",&a[i]);
l=s=a[0];
for(i=1;i<n;++i)
{
if(l<a[i])
l=a[i];
if(s>a[i])
s=a[i];
}
q=l+s;
printf("%llu \n\n",q);
return 0;
}