/*
Vowels are very essential characters to form any meaningful word in English dictionary. There are 5 vowels in English language - a, e, i, o u. You are given a randoms string containing only lowercase letters and you need to find if the string contains ALL the vowels.

Input:

FIrst line contains N , the size of the string.
Second line contains the letters (only lowercase).

Output:

Print "YES" (without the quotes) if all vowels are found in the string, "NO" (without the quotes) otherwise.

Constraints:

The size of the string will not be greater than 10,000
1 ≤ N ≤ 10000

SAMPLE INPUT 
8
atuongih
SAMPLE OUTPUT 
NO

URL: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/all-vowels-2/
*/
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
