import java.util.*;
import java.lang.*;
import java.io.*;

class CodeChef {
    public static void main(String[] args) {
        int X, A, B;
        Scanner sc = new Scanner(System.in);
        X = sc.nextInt();
        A = sc.nextInt();
        B = sc.nextInt();
        if (A + B > X) {
            System.out.print("NO");
        } else {
            System.out.print("YES");
        }
        sc.close();
    }

}