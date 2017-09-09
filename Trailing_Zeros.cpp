#include <iostream>
using namespace std;
int trail(int n)
{
    int cnt = 0;
    for(int i = 5; n/i >= 1; i*= 5)
        cnt += n/i;
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<trail(n);
    return 0;
