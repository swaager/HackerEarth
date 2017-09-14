#include <bits/stdc++.h>
using namespace std;
string find(long int n1, long int n2)
{
    string num1 = to_string(n1);
    string num2 = to_string(n2);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int n = stoi(num1);
    int m = stoi(num2);
    int sum = n + m;
    string num_sum = to_string(sum);
    reverse(num_sum.begin(), num_sum.end());
    num_sum.erase(0, num_sum.find_first_not_of('0'));
    return num_sum;
}
int main()
{
    int tc;
    cin>>tc;
    long int n1, n2;
    while(tc--)
    {
        cin>>n1>>n2;
        cout<<find(n1,n2)<<endl;
    }
    return 0;
}
