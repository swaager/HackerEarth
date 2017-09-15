#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc, count,i,temp;
    cin>>tc;
    while(tc--)
    {
        count = 0;
        cin>>i;
        int a[i];
        for(int p = 0 ; p < i; p++)
        {
            cin>>temp;
            a[p] = temp;
        }
        sort(a,a+i);
        for(int m = 0; m < (i - 2); m++)
        {
            if(a[m] + a[m + 2] == (2* a[m + 1]))
            {
                count++;
            }
        }
        if(count == (i -2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
