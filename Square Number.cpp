#include <iostream>
#include <math.h>
using namespace std;
bool issquare(long int n)
{
    if(n<0)
    {
        return false;
    }
    int root(round(sqrt(n)));
    return (n == root*root);
}
int main()
{
    long int n;
    cin>>n;
    if(issquare(n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
