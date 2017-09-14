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
