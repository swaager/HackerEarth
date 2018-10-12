//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/

#include<stdio.h>
typedef int l;
long long int m = 1000000007;
l fx,gx,ans;
int n;

l p(l fx, l gx)
{
    if(gx == 1)
    {
        return fx;
    }
    l _p = p(fx,gx/2);
    _p = (_p * _p)%m;
    if(gx&1==1)
    {
        _p = (_p * fx) % m;
    }
    return _p;
}

int gcd(l a, l b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    scanf("%d",&n);
    l *arr = (l *)malloc(n * 4);
    scanf("%d",&arr[0]);
    gx = fx = arr[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        gx = gcd(gx,arr[i]);
        fx = (fx * arr[i])%m;
    }
    printf("%d",p(fx,gx));
    return 0;
}
