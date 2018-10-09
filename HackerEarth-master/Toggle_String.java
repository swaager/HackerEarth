import java.util.*;
import java.lang.*;
/*
You have been given a String 
S
S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String 
S
S

Output Format
Print the resultant String on a single line.

Constraints
 1
≤
|
S
|
≤
100
1≤|S|≤100 where 
|
S
|
|S| denotes the length of string 
S
S.

SAMPLE INPUT 
abcdE
SAMPLE OUTPUT 
ABCDe

URL: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
*/
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        String n = s.nextLine();
        StringBuilder sb = new StringBuilder(n);
        for(int index = 0; index < sb.length(); index++)
        {
            char c = sb.charAt(index);
            if(Character.isLowerCase(c))
            {
                sb.setCharAt(index, Character.toUpperCase(c));
            }
            else
            {
                sb.setCharAt(index,Character.toLowerCase(c));
            }
        }
        System.out.println(sb);
    }
}
