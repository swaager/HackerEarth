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
    int cnt = length;
    for(int i = 0; i < length; i++)
    {
        temp = s.substr(i,length);
        if(ispalindrome(temp))
        {
            cnt++;
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
