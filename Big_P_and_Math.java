import java.util.*;
/*
Big P is fairly good in mathematics.
His teacher has asked him to add two numbers.
Now , Big P has a problem that he sometimes writes a '6' as a '5' and vice versa.
Given two numbers, A and B, calculate the minimum and the maximum sum Big P could possibly get.

Input:
The first and only line of input contains positive integers A and B .

Output:
In single line of output, print two space separated integers, minimum and maximum sum Big P could get.

Constraints: 
1<= A,B <= 1000000

SAMPLE INPUT 
11 25
SAMPLE OUTPUT 
36 37
URL: https://www.hackerearth.com/problem/algorithm/big-p-and-math-15/description/
*/
class Big_P_and_Math {
    public static void main(String args[] ) throws Exception {
        Scanner in = new Scanner(System.in);
        Integer a = in.nextInt();
        Integer b = in.nextInt();
        System.out.print(Integer.parseInt(a.toString().replaceAll("6","5"))+ Integer.parseInt(b.toString().replaceAll("6","5")) + " ");
        System.out.print(Integer.parseInt(a.toString().replaceAll("5","6")) + Integer.parseInt(b.toString().replaceAll("5","6")) + " ");
    }
}
