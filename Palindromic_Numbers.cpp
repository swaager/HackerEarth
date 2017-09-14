#include <bits/stdc++.h>
using namespace std;
bool ispalin(string s)
{
    if( s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    return false;
}
int counts(long int a, long int b)
{
    int cnt = 0;
    for(long int i = a; i <= b; i++)
    {
        if(ispalin(to_string(i)))
            cnt++;
    }
    return cnt;
}
int main()
{
    int tc;
    long int a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        cout<<counts(a,b)<<endl;
    }
    return 0;
}
