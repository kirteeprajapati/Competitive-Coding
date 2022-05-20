import java.util.*;
import java.lang.*;
import java.io.*;

public class Codeforces { // for online compilers make sure your class is public
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int w;
        w = sc.nextInt();
        if (w % 2 == 0 && w != 2) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        sc.close();
    }
}