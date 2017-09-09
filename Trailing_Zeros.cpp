/*
Given a number find the number of trailing zeroes in its factorial.

Input Format

A single integer - N

Output Format

Print a single integer which is the number of trailing zeroes.

Input Constraints

1 <= N <= 1000

Problem Setter: Practo Tech Team

SAMPLE INPUT 
10
SAMPLE OUTPUT 
2
Explanation
10! = 3628800 has 2 zeros in the end.
URL: https://www.hackerearth.com/problem/algorithm/trailing-zeros/
*/
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
