/*
"RMS Lusitania" was one of the world biggest ship of her time.On the outbreak of the First World War in 1914, she was commandeered by the Admiralty as an armed merchant cruiser. When Lusitania left New York for Liverpool on what would be her final voyage on 1 May 1915, submarine warfare was intensifying in the Atlantic. Germany had declared the seas around the United Kingdom to be a war-zone..On the afternoon of May 7, Lusitania was bombarded by a German U-Boat,few miles off the southern coast of Ireland and inside the declared “zone of war”.Lusitania was officially carrying among her cargo rifle/machine-gun ammunition, shrapnel artillery shells without powder charges and artillery fuses.Captain "Dow" of Lusitania sensed the danger before and ordered his men to save the ammunition materials as much as they can.

They had few small boats and the overall load those small boats could carry was "
W
W".Captain "Dow" knew the value of all the "
N
N" ammunition items.So he told his men the weight "
W
i
Wi" and value "
V
i
Vi" of each ammunition item.As it is too difficult to save all the ammunition,Captain then asked his men to smarty choose ammunition items such that the total weight of the ammunition is less than or equal to maximum load those small ships can afford and the corresponding total value of ammunitions saved is maximum.
INPUT:

the first line contain number of testcases "
T
T"."
T
T" testcases follows then.For each testcase,the first line contains the number of ammunition items "
N
N",the second line contains the maximum load "
W
W" those small ships can afford.The third line contains the individual weight of each ammunition item.Then the next line contains the value "
V
V" of those "
N
N" ammunition items.

OUTPUT:

for each testcase output the maximum value of the ammunitions that can be saved.

Constraint:

1
≤
T
≤
100
1≤T≤100
0
≤
N
≤
1000
0≤N≤1000
1
≤
m
a
x
i
m
u
m
l
o
a
d
≤
1000
1≤maximumload≤1000
1
≤
w
e
i
g
h
t
o
f
i
n
d
i
v
i
d
u
a
l
i
t
e
m
s
≤
1000
1≤weightofindividualitems≤1000
1
≤
v
a
l
u
e
o
f
i
n
d
i
v
i
d
u
a
l
i
t
e
m
s
≤
1000
1≤valueofindividualitems≤1000
SAMPLE INPUT 
2
3 
3
1 2 3     
2 4 8
4 
8
2 4 5 7
4 9 7 5
SAMPLE OUTPUT 
8
13

*/
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
