#include <bits/stdc++.h>
using namespace std;
int prime(long int);
bool dipa(long int);
int main()
{
    int tc;
    long int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(dipa(n))
        {
            cout<<"Deepa"<<endl;
        }
        else
        {
            cout<<"Arjit"<<endl;
        }
    }
    return 0;
}
bool dipa(long int n)
{
    for(int i = 2; i < n; i++)
    {
        int a = prime(i);
        int b = prime(n - i);
        if((a == 1)&&(b==1))
        {
            return true;
        }
    }
    return false;
}
int prime(long int a)
{
    if(a == 2)
    {
        return 1;
    }
    else
    {
        for(int i = 2; i < a; i++)
        {
            if(a%i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}
