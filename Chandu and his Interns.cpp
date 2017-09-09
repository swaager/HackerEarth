#include <bits/stdc++.h>
using namespace std;
string drink(long int n)
{
    int count =0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
        if(count>=4)
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int n; 
    long int x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<drink(x)<<endl;
    }
    return 0;
}
