/*
Implement the recursive function given by the following rules and print the last 3 digits:

F(x, y) = {
y + 1 when x = 0,
F(x - 1, 1) when x > 0 and y = 0,
F(x - 1, F(x, y - 1)) when x > 0 and y > 0
}

Input Format
A single line containing two integers X,Y
1 <= X,Y <= 100000

Output Format
The last three digits

Input Constraints
X and Y are non-negative integers. Problem Setter: Practo Tech Team

SAMPLE INPUT 
1 100
SAMPLE OUTPUT 
102
Explanation
Note: x and y are non-negative integers
*/
#include <bits/stdc++.h>
using namespace std;
int recur(long long int x, long long int y)
{
    x %= 1000;
    y %= 1000;
    if(x == 0)
    {
        return (y + 1);
    }
    else if( x > 0 && y == 0)
    {
        return recur(x - 1, 1);
    }
    else if(y > 0 && x > 0)
    {
        return recur(x-1,recur(x,y-1));
    }
}
int outp(long long int x, long long int y)
{
    long long int ans = recur(x,y);
    return ans % 1000;
}
int main()
{
    long long int x , y;
    cin>>x>>y;
    cout<<outp(x,y);
    return 0;
}
