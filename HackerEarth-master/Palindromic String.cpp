#include <iostream>
/*
You have been given a String 
S
S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String 
S
S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 
1
≤
|
S
|
≤
100
1≤|S|≤100

Note
String 
S
S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
YES
URL: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
*/
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    if(s == string(s.rbegin(),s.rend()))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
