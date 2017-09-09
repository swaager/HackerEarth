#include <bits/stdc++.h>
using namespace std;
long int trail(int n)
{
    long int cnt = 0;
    while(n>0)
    {
        cnt+=n/5;
        n = n/5;
    }
    return cnt;
}
int main()
{
    int tc;
    double n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<trail(n)<<endl;
    }
    return 0;
}
