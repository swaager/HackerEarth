/*
Monk just purchased an array A having N integers. Monk is very superstitious. He calls the array A Lucky if the frequency of the minimum element is odd, otherwise he considers it Unlucky. Help Monk in finding out if the array is Lucky or not.

Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of a single integer N denoting the size of array A.
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print "Lucky" (without quotes) if frequency of minimum element is odd, otherwise print "Unlucky"(without quotes). Print a new line after each test case.

Constraints:
1 <= T <= 10
1 <= N <= 10^5
1 <= A[i] <= 10^9

SAMPLE INPUT

2
5
8 8 9 5 9
5
3 3 3 5 3

SAMPLE OUTPUT

Lucky
Unlucky

Explanation

In first case, value of minimum element is 5 and it's frequency is 1 which is odd, so the array is Lucky.
In second case, value of minimum element is 3 and it's frequency is 4 which is even, so the array is Unlucky.
*/


//SOLUTION

#include<stdio.h>
int main()
{
    int cases,n,min;
    scanf("%d",&cases);
    int a[cases];
    for(int i=0;i<cases;i++)
    a[i]=0;
    for(int i=0;i<cases;i++)
    {
        scanf("%d",&n);
        int b[n];
        scanf("%d",&b[0]);
        min=b[0];
        for(int j=1;j<n;j++)
        {
            scanf("%d",&b[j]);
            if(min>b[j])
            {
                min=b[j];
            }
        }
        for(int j=0;j<n;j++)
        {
            if(min==b[j])
            a[i]++;
        }
    }
    for(int i=0;i<cases;i++)
    {
        if(a[i]%2==1)
        printf("Lucky\n");
        else
        printf("Unlucky\n");
    }
}
