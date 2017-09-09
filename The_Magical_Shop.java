import java.util.*;
 
class The_Magical_Shop {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str;
        str = sc.nextLine().trim();
        StringTokenizer stk = new StringTokenizer(str);
        long n1 = Long.parseLong(stk.nextToken());
        long n2 = Long.parseLong(stk.nextToken());
        str = sc.nextLine().trim();
        long total = 0l;
        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == '1')
            {
                total = (total+n1)%n2;
            }
            n1 = (n1*n1)%n2;
        }
        System.out.println(total);
    }
}
