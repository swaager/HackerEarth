#include <bits/stdc++.h>
using namespace std;
int recur(long long int x, long long int y)
{
    x %= 1000;
    y %= 1000;
    if(x == 0)
    {
        return (y + 1);
    }
    else if( x > 0 && y == 0)
    {
        return recur(x - 1, 1);
    }
    else if(y > 0 && x > 0)
    {
        return recur(x-1,recur(x,y-1));
    }
}
int outp(long long int x, long long int y)
{
    long long int ans = recur(x,y);
    return ans % 1000;
}
int main()
{
    long long int x , y;
    cin>>x>>y;
    cout<<outp(x,y);
    return 0;
}
