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
