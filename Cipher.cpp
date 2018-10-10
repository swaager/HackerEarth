//Questions
/*
Indian army is going to do a surprise attack on one of its enemies country. The President of India, the Supreme Commander of the Indian Army will be sending an alert message to all its commanding centers.
As enemy would be monitoring the message, Indian army is going to encrypt(cipher) the message using basic encryption technique. A decoding key 'K' (number) would be sent secretly.

You are assigned to develop a cipher program to encrypt the message. Your cipher must rotate every character in the message by a fixed number making it unreadable by enemies.

Given a single line of string 'S' containing alpha, numeric and symbols, followed by a number '0<=N<=1000'. Encrypt and print the resulting string.

Note: The cipher only encrypts Alpha and Numeric. (A-Z, a-z, and 0-9) . All Symbols, such as - , ; %, remain unencrypted.
*/

//Sample Input
/*
All-convoYs-9-be:Alert1.
4
*/

//Sample Output
/*
Epp-gsrzsCw-3-fi:Epivx5.
*/

//Explanation
/*
First line contains the string to convert. S
Second line contains the number, encrypt key. K
A becomes E, Y becomes C, 9 becomes 3,
-, . unchanged.
*/

//Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int k;
    cin>>s>>k;
    for(int i=0;i<strlen(s);i++)
    {
        if(isalnum(s[i])){
            if(isalpha(s[i])){
                if(isupper(s[i])){
                    s[i]=s[i]+k%26;
                    if(int(s[i]>90)){
                        s[i]=s[i]-26;
                    }
                }else{
                    s[i]=s[i]+k%26;
                    if(int(s[i])>122){
                        s[i]=s[i]-26;
                    }
                }
            }else{
                s[i]=s[i]+k%10;
                if(int(s[i])>57){
                    s[i]=s[i]-10;
                }
            }
        }
    }
    cout<<s;
}