#include <bits/stdc++.h>
/*
Chandu is a very strict mentor. He always gives a lot of work to his interns. So his interns decided to kill him. There is a party in the office on Saturday Night, and the interns decided to kill him on the same day. In the party, there are N beer bottles. Each bottle has a integer X written on it. Interns decided to mix poison in some of the beer bottles. They made a plan that they will add poison into a bottle only if the integer on the beer bottle has number of divisors strictly less than 4. Chandu came to know about the plan of the interns. So he needs to your help to save his life. Tell Chandu if he can drink the beer or not.

Input:
First line of contains an integer N, denoting the number of bottles.
Each test case contains an integer X, denoting the number on the beer bottle.

Output:
For each beer bottle, print YES if Chandu can drink that beer, otherwise print NO.

Constraints:
1 <= N <= 105
1 <= X <= 107

SAMPLE INPUT 
3
2
3
6
SAMPLE OUTPUT 
NO
NO
YES
Explanation
In first case, X = 2 which has only two divisors 1 and 2. So it will have poison. 
Similarly, for second case, X = 3 which has two divisors 1 and 3. So it will have poison. 
In third case, X = 6 which has four divisors i.e 1, 2, 3 and 6. So it will not have poison.
URL: https://www.hackerearth.com/problem/algorithm/chandu-and-his-interns/description/

CAUTION: Time Limit Exceeded
*/
using namespace std;
string drink(long int temp)
{
    int count = 0;
    for(int i = 1; i * i < temp; ++i)
    {
        if(temp % i == 0)
        {
            if(i * i == temp)
            {
                count++;
            }
            else
            {
                count+=2;
            }
        }
        if(count>=4)
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int n; 
    long int x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<drink(x)<<endl;
    }
    return 0;
}
