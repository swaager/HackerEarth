#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dp[1001][1001];
    int tc;
    int n,w,i,v;
    vector<int> wt;
    vector<int> val;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>w;
        wt.clear();
        val.clear();
        for(int a = 0; a <n; a++)
        {
            cin>>i;
            wt.push_back(i);
        }
        for(int a = 0; a <n;a++)
        {
            cin>>v;
            val.push_back(v);
        }
        for(int i = 0; i <= n; ++i)
        {
            for(int j = 0; j <= w; ++j)
            {
                if(i == 0 || j == 0) 
                {
                    dp[i][j] = 0;
                }
                else if(j-wt[i-1] <0)
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j-wt[i-1]]);
                }
            }
        }
        cout<<dp[n][w]<<endl;
    }
    return 0;
}
