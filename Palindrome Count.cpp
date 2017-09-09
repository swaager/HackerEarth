// Partially Accepted Solved, refer earlier commit to see where I went wrong
/*
Given a string S, count the number of non empty sub strings that are palindromes.
A sub string is any continuous sequence of characters in the string.
A string is said to be palindrome, if the reverse of the string is same as itself.
Two sub strings are different if they occur at different positions in S

Input
Input contains only a single line that contains string S.

Output
Print a single number, the number of sub strings that are palindromes.

Constraints
1 <= |S| <= 50
S contains only lower case latin letters, that is characters a to z.

SAMPLE INPUT 
dskjkd
SAMPLE OUTPUT 
7
Explanation
The 7 sub strings are d, s, k, j, k, d, kjk.

URL: https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/palindrome-count-1/
*/
#include <iostream>
using namespace std;
bool ispalindrome(string input)
{
    if(input == string(input.rbegin(), input.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int count(string s)
{
    string temp;
    int length = s.length();
    int cnt;
    for(int i = 0; i < length; i++)
    {
        for(int j = 1; j<= length - i  ; j++)
        {
            temp = s.substr(i,j);
            //int k = i + j - 1;
            if(ispalindrome(temp))
            {
                cnt++;
            }
        }    
    }
    
    return cnt;
}
int main()
{
    string s;
    cin >> s;
    cout << count(s);
    return 0;
}
