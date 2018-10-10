/*
Problem name - Divide Number
Problem link - https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/divide-number-a410603f/

Given integer N, you need to find four integers A,B,C,D , such that they're all factors of  (N), and N = A+B+C+D.
Your goal is to maximize A*B*C*D.

Input format
First line contains an integer , represents the number of test cases.

Each of the next  lines contains an integer  (,  will not exceed 64 bit integer).
*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,ans;
        cin>>n;
        if(n%2!=0){
            cout<<-1<<endl;
        }else{
            if(n%4==0){
                ans = n*n*n*n/256;
                cout<<ans<<endl;
            }else{
                if(n%3==0 && n%6==0){
                    ans = n*n*n*n/(36*9);
                    cout<<ans<<endl;
                }else if(n%5==0){
                    ans = n*n*n*n/500;
                    cout<<ans<<endl;
                }else cout<<-1<<endl;
            }
        }
    }
}
