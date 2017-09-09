//partially accepted removed, please refer the previous commit to see where I went wrong
/*
Given a number N. Your task is to find out N is Square Number or not.

Square Number is an integer that is the square of an integer, in other words, it is the product of some integer with itself. For example, 16 is a square number, since it can be written as 4 × 4.

Input:
Input contains a single integer N.

Output: 
Print YES if N is Square Number else print NO.

Constraints:

Test Files 1 to 5
1<=N<=103

Test Files 6 to 10
1<=N<= 1010

Sample Input #1:
20

Sample Output #1:
NO

Sample Input #2:
36

Sample Output #2:
YES

SAMPLE INPUT 
25

SAMPLE OUTPUT 
YES
*/
#include <iostream>
#include <math.h>
using namespace std;
bool issquare(long long int n)
{
    if(n<0)
    {
        return false;
    }
    long int root(round(sqrt(n)));
    return (n == root*root);
}
int main()
{
    long long int n;
    cin>>n;
    if(issquare(n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
