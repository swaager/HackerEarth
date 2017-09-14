/*
Given A and B, count the numbers N such that A ≤ N ≤ B and N is a palindrome.

Examples: 
Palindromes: 121, 11 , 11411 
Not Palindromes: 122, 10

Input: 
First line contains T, the number of testcases. Each testcase consists of two integers A and B in one line.

Output: 
For each testcase, print the required answer in one line.

Constraints: 
1 ≤ T ≤ 10 
0 ≤ A ≤ B ≤ 10^5

SAMPLE INPUT 
2
10 13
20 30
SAMPLE OUTPUT 
1
1
*/
#include <bits/stdc++.h>
using namespace std;
bool ispalin(string s)
{
    //check if string is palindrome
    if( s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    return false;
}
int counts(long int a, long int b)
{
    int cnt = 0;
    for(long int i = a; i <= b; i++)
    {
        //imo checking if integer is palindrome or not is slower compared to checking if string is palindrome or not
        //because our input is until 10^5, so easier and faster way may be to convert to string and check if its palindrome
        if(ispalin(to_string(i)))
            cnt++;
    }
    return cnt;
}
int main()
{
    int tc;
    long int a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        cout<<counts(a,b)<<endl;
    }
    return 0;
}
