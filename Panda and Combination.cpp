#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int tc;
    long long int m, n;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        if(m == 1ll || m>n)
        {
            cout<<n<<endl;
            continue;
        }
        long long ans = 0;
        while(n)
        {
            ans += n % m;
            n /= m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
