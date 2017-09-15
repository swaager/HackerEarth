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
