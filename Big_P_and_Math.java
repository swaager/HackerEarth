import java.util.*;
class Big_P_and_Math {
    public static void main(String args[] ) throws Exception {
        Scanner in = new Scanner(System.in);
        Integer a = in.nextInt();
        Integer b = in.nextInt();
        System.out.print(Integer.parseInt(a.toString().replaceAll("6","5"))+ Integer.parseInt(b.toString().replaceAll("6","5")) + " ");
        System.out.print(Integer.parseInt(a.toString().replaceAll("5","6")) + Integer.parseInt(b.toString().replaceAll("5","6")) + " ");
    }
}
