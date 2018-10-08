/*
Bob and Khatu are best friends. One Bob asked Khatu to solve a problem. He gave him an array of integers and asked him to tell him if he can arrange elements in the array such that the array forms a special sequence.
A special sequence is a sequence in which every two consecutive elements have same difference.
Since Khatu is good at solving problems he solved it within 1 minute. Now its time for you to solve the problem.

Input:
First line of input contains number of test cases T. Each test case contains two lines. First line contains value of N, size of Array. Next line contains N elements separated by space.

Output:
For each test case print YES if it is possible to arrange elements of array such that array form a special sequence else print NO.

Constraints:
1 ≤ T ≤ 5 
3 ≤ N ≤ 105
0 ≤ Ai ≤ 109

SAMPLE INPUT 
4
3
1 2 3
4
12 8 4 0
3
10 15 50
4
20 40 4 11
SAMPLE OUTPUT 
YES
YES
NO
NO
Link: https://www.hackerearth.com/problem/algorithm/ap-or-not-easy/
*/
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
