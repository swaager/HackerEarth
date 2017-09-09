/*
You are given a number N. How many zeroes does N! end on?

Input
The first line contains one integer T - number of test cases. The following T lines contain one integer each - N.

Output
For each test case output one integer per line - the answer for this question.

Constraints

T <= 1000
0 <= N <= 1011
SAMPLE INPUT 
3
9
11
20
SAMPLE OUTPUT 
1
2
4

Question: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/zrzr/
*/
#include <bits/stdc++.h>
using namespace std;
//the earlier solution was partially accepted because I forget to pass n as long int
long int trail(long int n)
{
    long int cnt = 0;
    while(n>0)
    {
        cnt+=n/5;
        n = n/5;
    }
    return cnt;
}
int main()
{
    int tc;
    long long n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<trail(n)<<endl;
    }
    return 0;
}
