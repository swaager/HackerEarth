/*
You are given a string, which contains entirely of decimal digits (0-9). Each digit is made of a certain number of dashes, as shown in the image below. For instance 1 is made of 2 dashes, 8 is made of 7 dashes and so on.

digits made of dashes

You have to write a function that takes this string message as an input and returns a corresponding value in terms of a number. This number is the count of dashes in the string message.

Note:

0 consists of 6 dashes, 1 consists of 2 dashes, 2 consists of 5 dashes, 3 consists of 5 dashes, 4 consists of 4 dashes, 5 consists of 5 dashes, 6 consists of 6 dashes, 7 consists of 3 dashes [though the figure shows that 7 consists of 4 dashes but due to minor mistake in the problem please write your solution assuming 7 consists of 3 dashes], 8 consists of 7 dashes, 9 consists of 6 dashes.

Constraints

String message will contain at least one digit, but not more than 100
Each character in code will be a digit ('0'-'9').
SAMPLE INPUT 
12134
SAMPLE OUTPUT 
18

URL: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/
*/
#include <iostream>
using namespace std;
int count_dash(string s)
{
    int cnt = 0, x;
    for(string::iterator it = s.begin(); it != s.end(); ++it)
    {
        switch(*it)
        {
            case '0': x = 6; break;
            case '1': x = 2; break;
            case '2': x = 5; break;
            case '3': x = 5; break;
            case '4': x = 4; break;
            case '5': x = 5; break;
            case '6': x = 6; break;
            case '7': x = 3; break;
            case '8': x = 7; break;
            case '9': x = 6; break;
        }
        cnt+=x;
    }
    return cnt;
}
int main()
{
    string s;
    cin>>s;
    cout<<count_dash(s);
    return 0;
}
