/*
A string is said to be complete if it contains all the characters from a to z. Given a string, check if it complete or not.

Input
First line of the input contains the number of strings N. It is followed by N lines each contains a single string.

Output
For each test case print "YES" if the string is complete, else print "NO"

Constraints
1 <= N <= 10
The length of the string is at max 100 and the string contains only the characters a to z

SAMPLE INPUT 
3
wyyga
qwertyuioplkjhgfdsazxcvbnm
ejuxggfsts
SAMPLE OUTPUT 
NO
YES
NO
*/
#include <bits/stdc++.h>
using namespace std;
bool complete(string s)
{
    if(s.length()<26)
    {
        return false;
    }
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        if(s.find(ch) == string::npos)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int tc;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        if(complete(s))
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
