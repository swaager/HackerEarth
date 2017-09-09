#include <bits/stdc++.h>
using namespace std;
string vowel(string s)
{
    bool hasa = false;
    bool hase = false;
    bool hasi = false;
    bool haso = false;
    bool hasu = false;
    for(string::iterator it = s.begin(); it != s.end();++it)
    {
        switch(*it)
        {
            case 'a': hasa = true; break;
            case 'e': hase = true; break;
            case 'i': hasi = true; break;
            case 'o': haso = true; break;
            case 'u': hasu = true; break;
        }
    }
    if(hasa && hase && hasi && haso && hasu)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<vowel(s);
    return 0;
}
