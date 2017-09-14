/*
On the way to Dandi March, Gandhijee carried a mirror with himself. 
When he reached Dandi, he decided to play a game with the tired people to give them some strength. 
At each turn of the game he pointed out a person and told him to say a number N(possibly huge) of his choice. 
The number was called lucky if that equals it's mirror image.

Input: 
First line contains number of test cases T. Each test case contains a single integer N.
Output: 
For each test case print "YES" if the number was lucky else print "NO" (quotes for clarity) in one line.

Constraints:
1 ≤ T ≤ 100
0 ≤ N ≤ 10100

Image for Sample Test Cases :
Refer Question: 
https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/mirror-of-mahatma-gandhi/
*/
#include <bits/stdc++.h>
using namespace std;
void dandi(string s)
{
    if(s != string(s.rbegin(), s.rend()))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(
            (s.find('2') != string::npos) || 
            (s.find('3') != string::npos) ||
            (s.find('4') != string::npos) ||
            (s.find('5') != string::npos) ||
            (s.find('6') != string::npos) ||
            (s.find('7') != string::npos) ||
            (s.find('9') != string::npos)
            )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    int tc;
    string n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        dandi(n);
    }
    return 0;
}
