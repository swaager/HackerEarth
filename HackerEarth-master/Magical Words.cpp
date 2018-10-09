/*
CAUTION: Partially Accepted. If you get the solution please do let me know
Queen of westeros is known for her dragons and magic. To control her dragons she speaks random but powerful words. The strength of her words can be predicted by a strange rule. Rule : Strength of a word is sum of square of size of palindromic substrings in the word. To recall the definition of palindrome, palindrome is a word which reads same when read forward and backward. For example, word "abaa" has 6 palindromic substrings. "aba","aa","a","b","a","a" with sizes 3,2,1,1,1,1 respectively. Their squares are 9,4,1,1,1,1. Hence total strength is 17. Given a queens word ind its strength.

Input

First line of input is T, number of test cases. Followed by T lines, each line containing a word.(only lowercase letters).

Output

Find Strength of each word.

Constraints:

1 <= Size of word <= 1000

1 <= T <=100

Sample Input:

2

abaa

cbc

Sample Output

17

12

SAMPLE INPUT 
2
abaa
cbc
SAMPLE OUTPUT 
17
12

Explanation
String "cbc" has 4 palindromic substrings, "c", "b", "c" and "cbc" of lengths 1,1,1 and 3. These have squares 1,1,1 and 9 summing up to 12.

URL: https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/magical-words-4/
*/
#include <iostream>
using namespace std;
bool ispalindrome(string input)
{
    if( input == string(input.rbegin(), input.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int counts(string s)
{
    int tot = 0;
    string temp;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            temp = s.substr(i,j);
            if(ispalindrome(temp))
            {
                tot += temp.length()*temp.length(); 
            }
        }
    }    
    return tot;
}
int main()
{
    string s;
    int t;
    cin >> t;
    while(t-- && t <= 100)
    {
        cin >> s;
        if(s.length() >= 1 && s.length() <= 1000)
        cout << counts(s)<<endl;
    }
    return 0;
}
