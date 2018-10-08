#include<iostream>
int main()
{
    long long int n,x,c=0,f=0;
    scanf("%lld",&n);
    int m=n;
    while(m--)
    {
        f=0;c=0;
        scanf("%lld",&x);
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0)
                if(i*i==x)
                    c++;
                else
                    c+=2;
            if(c>=4)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
