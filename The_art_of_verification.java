import java.util.*;
class The_art_of_verification {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();
        String colon_sc = inp.replaceAll("=", ": ");
        String removeBeforeQsn = colon_sc.substring(colon_sc.indexOf("?")+1);
        removeBeforeQsn.trim();
        String removeAmp = removeBeforeQsn.replaceAll("&","\n");
        System.out.println(removeAmp);
    }
}
