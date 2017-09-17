/*
Danny has a possible list of passwords of Manny's facebook account. All passwords length is odd. But Danny knows that Manny is a big fan of palindromes. So, his password and reverse of his password both should be in the list.

You have to print the length of Manny's password and it's middle character.

Note : The solution will be unique.

INPUT 
The first line of input contains the integer 
N
N, the number of possible passwords. 
Each of the following 
N
N lines contains a single word, its length being an odd number greater than 
2
2 and lesser than 
14
14. All characters are lowercase letters of the English alphabet.

OUTPUT 
The first and only line of output must contain the length of the correct password and its central letter.

CONSTRAINTS 
 1
≤
N
≤
100
1≤N≤100

SAMPLE INPUT 
4
abc
def
feg
cba
SAMPLE OUTPUT 
3 b
*/
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    vector<string> vec;
    vector<string> ::iterator it;
    string temp;
    cin>>tc;
    while(tc--)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    //iterate over the vector
    for(it = vec.begin(); it != vec.end(); ++it)
    {
        //*it returns the current string in iterator
        string temp = *it;
        //we now reverse the string and store in fnd
        string fnd = string(temp.rbegin(), temp.rend());
        //check if the reversed string is in vec
        if(find(vec.begin(), vec.end(), fnd) != vec.end())
        {
            //finding the mid length to print middle character
            int mlen = (temp.length()/2);
            cout<<temp.length()<<" "<<temp.at(mlen)<<endl;
            //if we do not erase, since there are two identical elements, it will print twice, so better remove the item 
         //from vector
            vec.erase(remove(vec.begin(), vec.end(), temp), vec.end());
        }
    }
    return 0;
}
