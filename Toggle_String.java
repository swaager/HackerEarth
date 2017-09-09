import java.util.*;
import java.lang.*;

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
